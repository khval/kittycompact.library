/* :ts=4
 *  $VER: FreeLookupTable.c $Revision$ (16-Mar-2020)
 *
 *  This file is part of kittyCompact.
 *
 *  Copyright (c) 2020 LiveForIt Software.
 *  MIT License..
 *
 * $Id$
 *
 * $Log$
 *
 *
 */


#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <exec/types.h>
#include <libraries/kittyCompact.h>
#include <proto/kittyCompact.h>
#include <stdarg.h>

/****** kittyCompact/main/FreeLookupTable ******************************************
*
*   NAME
*      FreeLookupTable -- Description
*
*   SYNOPSIS
*      struct TokenInfo * FreeLookupTable(void * table);
*
*   FUNCTION
*
*   INPUTS
*       table - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _kittycompact_FreeLookupTable(struct kittyCompactIFace *Self,  void * table)
{
	FreeVec( table );
}

