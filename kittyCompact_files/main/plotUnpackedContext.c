/* :ts=4
 *  $VER: plotUnpackedContext.c $Revision$ (18-Apr-2020)
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


#include <stdbool.h>
#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <exec/types.h>
#include <libraries/kittyCompact.h>
#include <proto/retroMode.h>
#include <stdarg.h>

/****** kittyCompact/main/plotUnpackedContext ******************************************
*
*   NAME
*      plotUnpackedContext -- Description
*
*   SYNOPSIS
*      void plotUnpackedContext(struct PacPicContext * context, 
*          struct retroScreen * screen, int x, int y);
*
*   FUNCTION
*
*   INPUTS
*       context - 
*       screen - 
*       x - 
*       y - 
*
*   RESULT
*       This function does not return a result
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

void _kittycompact_plotUnpackedContext(struct kittyCompactIFace *Self,
       struct PacPicContext * context,
       struct retroScreen * screen,
       int x,
       int y)
{
	plotUnpackedContext(context, screen, x, y);
}

