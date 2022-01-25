Name:          python2-sip
BuildArch:     aarch64
Version:       4.19.4
Release:       sf0.1
License:       GPLv3
Summary:       SIP - Python/C++ Bindings Generator

Provides:      python2-sip=4.19.4-sf0.1
Provides:      python-sip=4.19.4-sf0.1
Provides:      sip=4.19.4-sf0.1
Provides:      sip.so

Requires:      python2
Requires:      libc.so.6()(64bit)
Requires:      libgcc_s.so.1()(64bit)
Requires:      libstdc++.so.6()(64bit)

%description
SIP is a tool for generating bindings for C++ classes so that they can be
accessed as normal Python classes. SIP takes many of its ideas from SWIG but,
because it is specifically designed for C++ and Python, is able to generate
tighter bindings. SIP is so called because it is a small SWIG.

%files
%attr(0755, root, root) "/usr/bin/sip"
%attr(0755, root, root) "/usr/lib64/python2.7/site-packages/sip.so"
%attr(0755, root, root) "/usr/lib64/python2.7/site-packages/sip.pyi"
%attr(0755, root, root) "/usr/lib64/python2.7/site-packages/sipconfig.py"
%attr(0755, root, root) "/usr/lib64/python2.7/site-packages/sipdistutils.py"
%attr(0755, root, root) "/usr/include/python2.7/sip.h"
