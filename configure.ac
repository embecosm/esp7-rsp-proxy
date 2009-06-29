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

AC_INIT([embecosm-esp7-rsp-proxy], [1.1], [support@embecosm.com])
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([config.h])

AC_COPYRIGHT(Copyright (C) 2009 Embecosm Limited)
AC_REVISION([$Id$ using automake version] AC_ACVERSION)

# Make sure we are using a reasonably recent autoconf version
AC_PREREQ(2.59)

# We're using C++
AC_LANG(C++)

# C++ compiler and install utility
AC_PROG_CXX
AC_PROG_INSTALL

# This is GNU compliant source and uses GNU libraries
AC_DEFINE(_GNU_SOURCE, 1, "The source code uses the GNU libraries)

# Check the headers. For now we'll assume that if we have the headers, we have
# the functions (no AC_CHECK_FUNCS). Headers for C++ and C.
AC_CHECK_HEADERS([cerrno cstdio cstdlib cstring fstream iomanip iostream], , \
		[AC_MSG_FAILURE(C++ headers missing)])
AC_CHECK_HEADERS([arpa/inet.h netdb.h netinet/in.h netinet/tcp.h poll.h \
                 stdint.h sys/socket.h], , \
                 [AC_MSG_FAILURE(C headers missing)])

# check for uint{8,32,64}_t in stdint.h.
AC_CHECK_TYPES([uint8_t, uint32_t, uint64_t], , \
               [AC_MSG_FAILURE(fixed unsigned types not available)], \
               [#include <stdint.h>])

# We want to create a Makefile
AC_CONFIG_FILES([Makefile doc/Makefile example/Makefile src/Makefile])

# Put it all out.
AC_OUTPUT
