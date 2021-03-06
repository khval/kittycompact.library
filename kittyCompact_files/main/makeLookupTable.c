/* :ts=4
 *  $VER: makeLookupTable.c $Revision$ (16-Mar-2020)
 *
 *  This file is part of kittyTurbo.
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
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#ifdef __amigaos4__
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/retroMode.h>
#endif

#include <amosKittens.h>
#include "cmdList.h"

extern struct DOSIFace		*IDOS ;

/****** kittyCompact/main/makeLookupTable ******************************************
*
*   NAME
*      makeLookupTable -- Description
*
*   SYNOPSIS
*      void makeLookupTable(void);
*
*   FUNCTION
*
*   INPUTS
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

extern struct cmdData AMOSPro_Compact[];

void *_kittycompact_makeLookupTable(struct kittyCompactIFace *Self)
{
	struct cmdData *cmd;
	char *ptr;
	ptr = (char *) AllocVecTags( 0x10000, 
			AVT_Type, MEMF_SHARED, 
			AVT_ClearWithValue, 0,
			TAG_END );

	for (cmd=AMOSPro_Compact;cmd -> fn;cmd++)
	{
		*((char *(**) KITTENS_CMD_ARGS) (ptr + cmd -> token)) = cmd -> fn;
	}

	return ptr;
}

