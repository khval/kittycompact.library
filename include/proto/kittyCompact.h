#ifndef PROTO_KITTYCOMPACT_H
#define PROTO_KITTYCOMPACT_H

/*
**	$Id$
**
**	Prototype/inline/pragma header file combo
**
**	Copyright (c) 2010 Hyperion Entertainment CVBA.
**	All Rights Reserved.
*/

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef LIBRARIES_KITTYCOMPACT_H
#include <libraries/kittyCompact.h>
#endif

/****************************************************************************/

#ifndef __NOLIBBASE__
 #ifndef __USE_BASETYPE__
  extern struct Library * kittyCompactBase;
 #else
  extern struct Library * kittyCompactBase;
 #endif /* __USE_BASETYPE__ */
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#ifdef __amigaos4__
 #include <interfaces/kittyCompact.h>
 #ifdef __USE_INLINE__
  #include <inline4/kittyCompact.h>
 #endif /* __USE_INLINE__ */
 #ifndef CLIB_KITTYCOMPACT_PROTOS_H
  #define CLIB_KITTYCOMPACT_PROTOS_H 1
 #endif /* CLIB_KITTYCOMPACT_PROTOS_H */
 #ifndef __NOGLOBALIFACE__
  extern struct kittyCompactIFace *IkittyCompact;
 #endif /* __NOGLOBALIFACE__ */
#else /* __amigaos4__ */
 #ifndef CLIB_KITTYCOMPACT_PROTOS_H
  #include <clib/kittyCompact_protos.h>
 #endif /* CLIB_KITTYCOMPACT_PROTOS_H */
 #if defined(__GNUC__)
  #ifndef __PPC__
   #include <inline/kittyCompact.h>
  #else /* __PPC__ */
   #include <ppcinline/kittyCompact.h>
  #endif /* __PPC__ */
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/kittyCompact_protos.h>
  #endif /* __PPC__ */
 #else /* __GNUC__ */
  #include <pragmas/kittyCompact_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#endif /* PROTO_KITTYCOMPACT_H */
