# Top level autoconf configuration file
#
# Copyright (C) 2009 Embecosm Limited
#
# Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>
#
# This file is part of the Embecosm Proxy GDB RSP server
# 
# This program is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the Free
# Software Foundation; either version 3 of the License, or (at your option)
# any later version.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
# more details.
#
# You should have received a copy of the GNU General Public License along
# with this program.  If not, see <http://www.gnu.org/licenses/>.


# Process this file with autoconf to produce a configure script.

AC_INIT([embecosm-esp7-rsp-proxy], [1.0], [support@embecosm.com])
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([config.h])

AC_REVISION([$Id$ using automake version] AC_ACVERSION)

# Make sure we are using a reasonably recent autoconf version
AC_PREREQ(2.59)

# C++ compiler and make utility
AC_PROG_CXX
AC_PROG_CXX_C_O

AC_PROG_MAKE_SET

AC_PROG_INSTALL

# This is GNU compliant source and uses GNU libraries
AC_DEFINE(_GNU_SOURCE, 1, "The source code uses the GNU libraries)

# Check the headers. For now we'll assume that if we have the headers, we have
# the functions (no AC_CHECK_FUNCS)
AC_CHECK_HEADERS (arpa/inet.h cerrno cstdio cstdlib cstring fstream iomanip \
		  iostream netdb.h netinet/in.h netinet/tcp.h poll.h stdint.h \
		  sys/socket.h)
AC_HEADER_STDC
AC_CHECK_DECLS([I_PUSH])
AC_C_BIGENDIAN

# Checks for typedefs, structures, and compiler characteristics (for argtable2)
AC_C_CONST
AC_TYPE_SIZE_T
AC_STRUCT_TM

# check for uint{8,32,64}_t in stdint.h.
AC_CHECK_TYPES([uint8_t, uint32_t, uint64_t],,, [#include <stdint.h>])

# We want to create a Makefile
AC_CONFIG_FILES([Makefile doc/Makefile example/Makefile src/Makefile])

# Put it all out.
AC_OUTPUT
