
/* This file was generated by idltool 53.6. Do not edit */

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef LIBRARIES_KITTYCOMPACT_H
#include <libraries/kittyCompact.h>
#endif

extern ULONG                VARARGS68K _kittycompact_Obtain(struct kittyCompactIFace *);
extern ULONG                VARARGS68K _kittycompact_Release(struct kittyCompactIFace *);
extern char *               VARARGS68K _kittycompact_makeLookupTable(struct kittyCompactIFace *);
extern void                 VARARGS68K _kittycompact_FreeLookupTable(struct kittyCompactIFace *, void * table);
extern int                  VARARGS68K _kittycompact_test(struct kittyCompactIFace *);
