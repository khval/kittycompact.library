
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>




#ifdef __amigaos4__
#include <proto/exec.h>
#include <proto/retroMode.h>
#endif

#include <amosKittens.h>

#include "cmdList.h"

struct cmdData AMOSPro_Compact[]={
		{0x0006,"Pack",0,compactPack},
		{0x0014,"Pack",0,compactPack},
		{0x0026,"Spack",0,compactSpack},
		{0x0036,"Spack",0,compactSpack},
		{0x0048,"Unpack",0,compactUnpack},
		{0x0056,"Unpack",0,compactUnpack},
		{0x0060,"Unpack",0,compactUnpack},
		{0x0000,NULL,0,0}};

