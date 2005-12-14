# Subclasses disutils.command.build_ext,
# replacing it with a SIP version that compiles .sip -> .cpp
# before calling the original build_ext command.
# Written by Giovanni Bajo <rasky at develer dot com>
# Based on Pyrex.Distutils, written by Graham Fawcett and Darrel Gallion.

import distutils.command.build_ext
from distutils.dep_util import newer
import os
import sys

def replace_suffix(path, new_suffix):
    return os.path.splitext(path)[0] + new_suffix

class build_ext (distutils.command.build_ext.build_ext):

    description = "Compiler SIP descriptions, then build C/C++ extensions (compile/link to build directory)"

    def _get_sip_output_list(self, sbf):
        """
        Parse the sbf file specified to extract the name of the generated source
        files. Make them absolute assuming they reside in the temp directory.
        """
        for L in file(sbf):
            key, value = L.split("=", 1)
            if key.strip() == "sources":
                out = []
                for o in value.split():
                    out.append(os.path.join(self.build_temp, o))
                return out

        raise RuntimeError, "cannot parse SIP-generated '%s'" % sbf

    def _find_sip(self):
        import sipconfig
        cfg = sipconfig.Configuration()
        return cfg.sip_bin

    def swig_sources (self, sources, extension=None):
        if not self.extensions:
            return

        # Create the temporary directory if it does not exist already
        if not os.path.isdir(self.build_temp):
            os.makedirs(self.build_temp)

        # Collect the names of the source (.sip) files
        sip_sources = []
        sip_sources = [source for source in sources if source.endswith('.sip')]
        other_sources = [source for source in sources if not source.endswith('.sip')]
        generated_sources = []

        sip_bin = self._find_sip()

        for sip in sip_sources:
            # Use the sbf file as dependency check
            sipbasename = os.path.basename(sip)
            sbf = os.path.join(self.build_temp, replace_suffix(sipbasename, "sbf"))
            if newer(sip, sbf) or self.force:
              self._sip_compile(sip_bin, sip, sbf)
              out = self._get_sip_output_list(sbf)
              generated_sources.extend(out)

        return generated_sources + other_sources

    def _sip_compile(self, sip_bin, source, sbf):
        self.spawn([sip_bin,
                    "-c", self.build_temp,
                    "-b", sbf,
                    source])
