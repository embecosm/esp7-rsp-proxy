# ----------------------------------------------------------------------------
# Makefile for example Program for testing the Proxy RSP Server

# Copyright (C) 2009  Embecosm Limited

# Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>

# This file is part of the Embecosm Proxy GDB RSP server

# This program is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or (at your
# option) any later version.

# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
# License for more details.

# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# ----------------------------------------------------------------------------

# $Id$

# Tools and flags

CC = or32-uclinux-gcc
CFLAGS = -ggdb -mhard-div
LD = or32-uclinux-ld


# ----------------------------------------------------------------------------
# Hello world. Ensure start.o is first!

hello: start.o utils.o hello.o 
	$(LD) -Ttext 0x0 $^ -o $@

start.o: start.s
	$(CC) $(CFLAGS) -c $<

utils.o: utils.c
	$(CC) $(CFLAGS) -c $<

hello.o: hello.c
	$(CC) $(CFLAGS) -c $<


# ----------------------------------------------------------------------------
# Documentation

doc: doxygen.config mainpage start.s utils.h utils.c hello.c
	doxygen doxygen.config

# ----------------------------------------------------------------------------
# Clean up

.PHONY: clean
clean:
	$(RM)    *.o
	$(RM) -r doc
	$(RM)    hello
	$(RM)    *~
