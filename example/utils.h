/* ----------------------------------------------------------------------------
 * Header for utilities to support the example program for testing the RSP
 * Dummy Server
 *
 * Copyright (C) 2009  Embecosm Limited
 *
 * Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>
 *	
 * This file is part of the dummy GDB RSP server in SystemC
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ----------------------------------------------------------------------------
 *
 * Header for simple OR1ksim Utilities
 *
 * $Id$
 *
 */


/* The utility routines for printing */

extern void  simexit( int  rc );
extern void  simputc( int  c );
extern void  simputh( int  i );
extern void  simputs( char *str );
