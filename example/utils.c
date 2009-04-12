/* ----------------------------------------------------------------------------
 * Utilities to support the example program for testing the Proxy RSP Server
 *
 * Copyright (C) 2009  Embecosm Limited
 *
 * Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>
 *	
 * This file is part of the Embecosm Proxy GDB RSP server.
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
 * Utility printing routines.
 *
 * $Id$
 *
 */


/* l.nop constants only used here */

#define NOP_NOP         0x0000      /* Normal nop instruction */
#define NOP_EXIT        0x0001      /* End of simulation */
#define NOP_REPORT      0x0002      /* Simple report */
#define NOP_PRINTF      0x0003      /* Simprintf instruction */
#define NOP_PUTC        0x0004      /* JPB: Simputc instruction */
#define NOP_CNT_RESET   0x0005	    /* Reset statistics counters */


/*! Exit the simulator
 *!
 *! @param  rc Return code (not used)
 */

void  simexit( int  rc )
{
  __asm__ __volatile__ ( "\tl.nop\t%0" : : "K"( NOP_EXIT ));

}	/* simexit() */


/*! Print a character
 *!
 *! @param  c Character to print
 */

void  simputc( int  c )
{
  __asm__ __volatile__ ( "\tl.nop\t%0" : : "K"( NOP_PUTC ));

}	/* simputc() */


/*! Print a hex number
 *!
 *! @param  i Number to print
 */

extern void  simputh( unsigned long int  i )
{
  char  lsd = i & 0xf;
  char  ch  = lsd < 10 ? '0' + lsd : 'A' + lsd - 10;

  if( i > 0 ) {
    simputh( i >> 4 );
  }

  simputc( ch );

}	/* simputh() */
  
    
/*! Print a decimal number
 *!
 *! @param  i Number to print
 */
extern void  simputn( unsigned long int  i )
{
  if( i > 9 ) {
    simputn( i / 10 );
  }

  simputc ('0' + (i % 10));

}	/* simputh() */


/*! Print a string
 *!
 *! @param  str String to print
 */
void  simputs( char *str )
{
  int  i;

  for( i = 0; str[i] != '\0' ; i++ ) {
    simputc( (int)(str[i]) );
  }

}	/* simputs() */
