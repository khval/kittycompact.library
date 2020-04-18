/* :ts=4
 *  $VER: convertPacPic.c $Revision$ (18-Apr-2020)
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

#include <stdbool.h>

#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <exec/types.h>
#include <libraries/kittyCompact.h>
#include <stdarg.h>

/****** kittyCompact/main/convertPacPic ******************************************
*
*   NAME
*      convertPacPic -- Description
*
*   SYNOPSIS
*      bool convertPacPic(unsigned char * data, 
*          struct PacPicContext * context);
*
*   FUNCTION
*
*   INPUTS
*       data - 
*       context - 
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

bool _kittycompact_convertPacPic(struct kittyCompactIFace *Self,  unsigned char * data,  struct PacPicContext * context)
{
  return convertPacPic(data, context);
}

