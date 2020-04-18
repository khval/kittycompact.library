/* :ts=4
 *  $VER: Release.c $Revision$ (03-Mar-2020)
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

#include <stdbool.h>
#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <exec/types.h>
#include <libraries/kittyCompact.h>
#include <proto/kittyCompact.h>
#include <stdarg.h>

/****** kittyCompact/main/Release ******************************************
*
*   NAME
*      Release -- Description
*
*   SYNOPSIS
*      ULONG Release(void);
*
*   FUNCTION
*
*   INPUTS
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

ULONG _kittycompact_Release(struct kittyCompactIFace *Self)
{
    return --Self -> Data.RefCount;
}

