Embecosm GNU Debugger Proxy RSP Server
======================================

About
-----

This is a proxy Remote Serial Protocol server. It allows GDB clients to test
their capability of reading and writing registers and memory over RSP.

Building and installing
-----------------------

This system uses autotools to control building and installing. You will need *autoconf*, *automake* and *libtool* installed. Then run:

    autoreconf -f -i

Thereafter standard GNU installation instructions apply. See the file INSTALL
for details.

Copying
-------

This software is licensed under the GNU General Public License (GPL). Full
details of the GPL can be found in the file COPYING
