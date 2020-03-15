VERSION = 53
REVISION = 1

.macro DATE
.ascii "3.3.2020"
.endm

.macro VERS
.ascii "kittyCompact.library 53.1"
.endm

.macro VSTRING
.ascii "kittyCompact.library 53.1 (3.3.2020)"
.byte 13,10,0
.endm

.macro VERSTAG
.byte 0
.ascii "$VER: kittyCompact.library 53.1 (3.3.2020)"
.byte 0
.endm
