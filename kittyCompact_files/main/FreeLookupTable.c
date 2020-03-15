/* :ts=4
 *  $VER: FreeLookupTable.c $Revision$ (03-Mar-2020)
 *
 *  This file is part of kittyCompact.
 *
 *  Copyright (c) 2020 Hyperion Entertainment CVBA.
 *  All Rights Reserved.
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

