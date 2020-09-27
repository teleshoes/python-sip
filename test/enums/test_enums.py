# Copyright (c) 2020, Riverbank Computing Limited
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


from enum import Enum, Flag, IntEnum, IntFlag

from utils import SIPTestCase


class EnumsTestCase(SIPTestCase):
    """ Test the support for enums in ABI v13 and later. """

    @classmethod
    def setUpClass(cls):
        """ Set up the test case. """

        super().setUpClass()

        from .enums import EnumClass

        class NamedEnumFixture(EnumClass):
            """ A fixture for testing named enum values. """

            def __init__(self, value):
                """ Initialise the object. """

                super().__init__()

                self._value = value

            def named_virt(self):
                return self._value

        cls.member_fixture = NamedEnumFixture(
                EnumClass.ClassNamedEnum.ClassNamedMember)
        cls.int_fixture = NamedEnumFixture(0)

        class ScopedEnumFixture(EnumClass):
            """ A fixture for testing scoped enum values. """

            def scoped_virt(self):
                return EnumClass.ClassScopedEnum.ClassScopedMember

        cls.scoped_enum_fixture = ScopedEnumFixture()

    @classmethod
    def tearDownClass(cls):
        """ Tear down the test case. """

        # Remove all references to the extension module so that the superclass
        # can unload it.
        del cls.member_fixture
        del cls.int_fixture

        del cls.scoped_enum_fixture

        super().tearDownClass()

    ###########################################################################
    # The following test anonymous enums.
    ###########################################################################

    def test_ModuleAnon(self):
        """ Test a module level anonymous enum. """

        from .enums import AnonMember

        self.assertIsInstance(AnonMember, int)
        self.assertEqual(AnonMember, 10)

    def test_ClassAnon(self):
        """ Test a class level anonymous enum. """

        from .enums import EnumClass

        self.assertIsInstance(EnumClass.ClassAnonMember, int)
        self.assertEqual(EnumClass.ClassAnonMember, 40)

    ###########################################################################
    # The following test the /BaseType/ annotation.
    ###########################################################################

    def test_Enum_BaseType(self):
        """ Test /BaseType=Enum/. """

        from .enums import EnumBase

        self.assertTrue(issubclass(EnumBase, Enum))
        self.assertFalse(issubclass(EnumBase, Flag))
        self.assertFalse(issubclass(EnumBase, IntEnum))
        self.assertFalse(issubclass(EnumBase, IntFlag))

    def test_Flag_BaseType(self):
        """ Test /BaseType=Flag/. """

        from .enums import FlagBase

        self.assertTrue(issubclass(FlagBase, Flag))
        self.assertFalse(issubclass(FlagBase, IntEnum))
        self.assertFalse(issubclass(FlagBase, IntFlag))

    def test_IntEnum_BaseType(self):
        """ Test /BaseType=IntEnum/. """

        from .enums import IntEnumBase

        self.assertFalse(issubclass(IntEnumBase, Flag))
        self.assertTrue(issubclass(IntEnumBase, IntEnum))
        self.assertFalse(issubclass(IntEnumBase, IntFlag))

    def test_IntFlag_BaseType(self):
        """ Test /BaseType=IntFlag/. """

        from .enums import IntFlagBase

        self.assertFalse(issubclass(IntFlagBase, IntEnum))
        self.assertTrue(issubclass(IntFlagBase, IntFlag))

    ###########################################################################
    # The following test named enums.
    ###########################################################################

    def test_ModuleNamed(self):
        """ Test a module level named enum. """

        from .enums import NamedEnum

        self.assertTrue(issubclass(NamedEnum, Enum))
        self.assertEqual(NamedEnum.NamedMember.value, 20)

    def test_ClassNamed(self):
        """ Test a class level named enum. """

        from .enums import EnumClass

        self.assertTrue(issubclass(EnumClass.ClassNamedEnum, Enum))
        self.assertEqual(EnumClass.ClassNamedEnum.ClassNamedMember.value, 50)

    def test_named_get_member(self):
        """ named enum virtual result with a member value. """

        from .enums import EnumClass

        self.install_hook()
        self.assertEqual(self.member_fixture.named_get(),
                EnumClass.ClassNamedEnum.ClassNamedMember)
        self.uninstall_hook()

    def test_named_set_member(self):
        """ named enum function argument with a member value. """

        from .enums import EnumClass

        self.member_fixture.named_set(
                EnumClass.ClassNamedEnum.ClassNamedMember)

    def test_named_var_member(self):
        """ named enum instance variable with a member value. """

        from .enums import EnumClass

        self.member_fixture.named_var = EnumClass.ClassNamedEnum.ClassNamedMember

    def test_named_overload_set(self):
        """ overloaded named enum function argument. """

        from .enums import EnumClass

        self.member_fixture.named_overload_set(
                EnumClass.ClassNamedEnum.ClassNamedMember)
        self.assertTrue(self.member_fixture.named_overload)

    def test_named_get_int(self):
        """ named enum virtual result with an integer value. """

        from .enums import EnumClass

        with self.assertRaises(TypeError):
            self.install_hook()
            self.int_fixture.named_get()
            self.uninstall_hook()

    def test_named_set_int(self):
        """ named enum function argument with an integer value. """

        with self.assertRaises(TypeError):
            self.int_fixture.named_set(50)

    def test_named_var_int(self):
        """ named enum instance variable with an integer value. """

        with self.assertRaises(TypeError):
            self.int_fixture.named_var = 50

    ###########################################################################
    # The following test scoped enums.
    ###########################################################################

    def test_ModuleScoped(self):
        """ Test a module level C++11 scoped enum. """

        from .enums import ScopedEnum

        self.assertTrue(issubclass(ScopedEnum, Enum))
        self.assertEqual(ScopedEnum.ScopedMember.value, 30)

    def test_ClassScoped(self):
        """ Test a class level C++11 scoped enum. """

        from .enums import EnumClass

        self.assertTrue(issubclass(EnumClass.ClassScopedEnum, Enum))
        self.assertEqual(EnumClass.ClassScopedEnum.ClassScopedMember.value, 70)

    def test_scoped_get_member(self):
        """ scoped enum virtual result with a member value. """

        from .enums import EnumClass

        self.install_hook()
        self.assertIs(self.scoped_enum_fixture.scoped_get(),
                EnumClass.ClassScopedEnum.ClassScopedMember)
        self.uninstall_hook()

    def test_scoped_set_member(self):
        """ scoped enum function argument with a member value. """

        from .enums import EnumClass

        self.scoped_enum_fixture.scoped_set(
                EnumClass.ClassScopedEnum.ClassScopedMember)

    def test_scoped_var_member(self):
        """ scoped enum instance variable with a member value. """

        from .enums import EnumClass

        self.scoped_enum_fixture.scoped_var = EnumClass.ClassScopedEnum.ClassScopedMember
