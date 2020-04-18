/* :ts=4
 *  $VER: convertPacPicData.c $Revision$ (18-Apr-2020)
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
#include <stdarg.h>

/****** kittyCompact/main/convertPacPicData ******************************************
*
*   NAME
*      convertPacPicData -- Description
*
*   SYNOPSIS
*      bool convertPacPicData(unsigned char * data, int o, 
*          struct PacPicContext * context);
*
*   FUNCTION
*
*   INPUTS
*       data - 
*       o - 
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

bool _kittycompact_convertPacPicData(struct kittyCompactIFace *Self,
       unsigned char * data,
       int o,
       struct PacPicContext * context)
{
  return convertPacPicData(data, o, context);
}

