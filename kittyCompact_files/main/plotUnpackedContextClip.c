/* :ts=4
 *  $VER: plotUnpackedContextClip.c $Revision$ (30-Aug-2020)
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
#include <proto/kittyCompact.h>
#include <proto/retroMode.h>
#include <proto/graphics.h>
#include <stdarg.h>

/****** kittyCompact/main/plotUnpackedContextClip ******************************************
*
*   NAME
*      plotUnpackedContextClip -- Description
*
*   SYNOPSIS
*      void plotUnpackedContextClip(struct PacPicContext * context, 
*          struct retroScreen * screen, int x, int y, 
*          struct Rectangle * clip);
*
*   FUNCTION
*
*   INPUTS
*       context - 
*       screen - 
*       x - 
*       y - 
*       clip - 
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

#undef plotUnpackedContextClip

void plotUnpackedContextClip( struct PacPicContext * context, struct retroScreen * screen, int x, int y, struct Rectangle * clip);

void _kittycompact_plotUnpackedContextClip(struct kittyCompactIFace *Self,
       struct PacPicContext * context, struct retroScreen * screen, int x, int y, struct Rectangle * clip)
{
	plotUnpackedContextClip(context, screen, x, y, clip);
}

