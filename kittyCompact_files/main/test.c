/* :ts=4
 *  $VER: test.c $Revision$ (14-Mar-2020)
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

/****** kittyCompact/main/test ******************************************
*
*   NAME
*      test -- Description
*
*   SYNOPSIS
*      int test(void);
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

int _kittycompact_test(struct kittyCompactIFace *Self)
{
  return 0xDEADDEAD;
}

