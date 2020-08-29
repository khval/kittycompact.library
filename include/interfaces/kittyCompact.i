#ifndef KITTYCOMPACT_INTERFACE_DEF_H
#define KITTYCOMPACT_INTERFACE_DEF_H
/*
** This file is machine generated from idltool
** Do not edit
*/ 

#include <exec/types.i>
#include <exec/exec.i>
#include <exec/interfaces.i>

STRUCTURE kittyCompactIFace, InterfaceData_SIZE
	    FPTR IkittyCompact_Obtain
	    FPTR IkittyCompact_Release
	    FPTR IkittyCompact_Expunge
	    FPTR IkittyCompact_Clone
	    FPTR IkittyCompact_makeLookupTable
	    FPTR IkittyCompact_FreeLookupTable
	    FPTR IkittyCompact_makeContext
	    FPTR IkittyCompact_FreeContext
	    FPTR IkittyCompact_convertPacPic
	    FPTR IkittyCompact_convertPacPicData
	    FPTR IkittyCompact_plotUnpackedContext
	    FPTR IkittyCompact_plotUnpackedContextClip
	LABEL kittyCompactIFace_SIZE

#endif
