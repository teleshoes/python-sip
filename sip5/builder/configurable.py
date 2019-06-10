# Copyright (c) 2019, Riverbank Computing Limited
# All rights reserved.
#
# This copy of SIP is licensed for use under the terms of the SIP License
# Agreement.  See the file LICENSE for more details.
#
# This copy of SIP may also used under the terms of the GNU General Public
# License v2 or v3 as published by the Free Software Foundation which can be
# found in the files LICENSE-GPL2 and LICENSE-GPL3 included in this package.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.


from .pyproject import PyProjectOptionException


class Configurable:
    """ A base class for an object that can be configured by a pyproject.toml,
    a build script or (possibly) the user via command line options.
    """

    def __init__(self):
        """ Initialise the object. """

        # Set the value for each option as undefined.
        for option in self.get_options():
            setattr(self, option.name, None)

    def add_command_line_options(self, parser, tool, all_options):
        """ Add the object's command line options to an argument parser and
        update a map of Object instances and the configurables that they should
        be applied to.
        """

        for option in self.get_options():
            # If it has ready been set explicitly then the user cannot change
            # it.
            if getattr(self, option.name) is not None:
                continue

            # If there is no help then the user can never specify it.
            if not option.help:
                continue

            # See if the option is applicable to this tool.
            if option.tools and tool not in option.tools:
                continue

            # See if the option has already been added.
            configurables = all_options.setdefault(option, list())
            configurables.append(self)

            if len(configurables) != 1:
                continue

            # Add the option according to its type.
            argument_name = option.user_name

            if option.inverted:
                argument_name = 'no-' + argument_name

            argument_name = '--' + argument_name

            if option.option_type is bool:
                parser.add_argument(argument_name, dest=option.dest,
                        action=('store_false' if option.inverted
                                else 'store_true'),
                        help=option.help)
            elif option.option_type is list:
                # Remove any plural.
                if argument_name.endswith('s'):
                    argument_name = argument_name[:-1]

                parser.add_argument(argument_name, dest=option.dest,
                        choices=option.choices, action='append',
                        help=option.help, metavar=option.metavar)
            else:
                parser.add_argument(argument_name, dest=option.dest,
                        type=option.option_type, choices=option.choices,
                        help=option.help, metavar=option.metavar)

    def apply_defaults(self):
        """ Set default values for each configurable option that hasn't been
        set yet.
        """

        for option in self.get_options():
            value = getattr(self, option.name)
            if value is None:
                value = option.default
                if value is None:
                    # Provide a default default based on the type.
                    if option.option_type is list:
                        value = []
                    elif option.option_type is float:
                        value = 0.0
                    elif option.option_type is int:
                        value = 0
                    elif option.option_type is bool:
                        value = True if option.inverted else False
                    elif option.option_type is str:
                        value = ''
                else:
                    # Make a copy of the default in case it is mutable.
                    value = option.option_type(value)

                setattr(self, option.name, value)

    def configure(self, pyproject, section_name):
        """ Perform the initial configuration of an object. """

        # The section is optional.
        section = pyproject.get_section(section_name)
        if section is None:
            return

        for name, value in section:
            # Find the corresponding option.
            for option in self.get_options():
                if option.user_name == name:
                    break
            else:
                raise PyProjectOptionException(section_name, name,
                        "is not a supported option")

            # Check the type of the option.
            if not isinstance(value, option.option_type):
                raise PyProjectOptionException(section_name, name,
                        "should be of type '{0}' and not '{1}'".format(
                                option.option_type.__name__,
                                type(value).__name__))

            setattr(self, option.name, value)

    def get_options(self):
        """ Return a sequence of configurable options. """

        return ()

    def verify_configuration(self):
        """ Verify that the configuration is complete and consistent. """

        # This default implementation does nothing.


class Option:
    """ Encapsulate a configuration option. """

    # This is used to make sure each option (even if they are handling the same
    # attribute) has a unique 'dest'.
    option_nr = 0

    def __init__(self, name, *, option_type=str, choices=None, default=None,
            help='', metavar=None, inverted=False, tools=''):
        """ Initialise the option. """

        self.name = name
        self.user_name = name.replace('_', '-')
        self.option_type = option_type
        self.default = default
        self.choices = choices
        self.help = help
        self.metavar = metavar
        self.inverted = inverted
        self.tools = tools.split()

        self.dest = 'd' + str(type(self).option_nr)
        type(self).option_nr += 1