/* :ts=4
 *  $VER: Obtain.c $Revision$ (03-Mar-2020)
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
#include <proto/kittyCompact.h>
#include <stdarg.h>

/****** kittyCompact/main/Obtain ******************************************
*
*   NAME
*      Obtain -- Description
*
*   SYNOPSIS
*      ULONG Obtain(void);
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

ULONG _kittycompact_Obtain(struct kittyCompactIFace *Self)
{
    return Self -> Data.RefCount++;
}

