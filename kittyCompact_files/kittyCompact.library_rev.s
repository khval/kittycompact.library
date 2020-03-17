VERSION = 53
REVISION = 2

.macro DATE
.ascii "16.3.2020"
.endm

.macro VERS
.ascii "kittycompact.library 53.2"
.endm

.macro VSTRING
.ascii "kittycompact.library 53.2 (16.3.2020)"
.byte 13,10,0
.endm

.macro VERSTAG
.byte 0
.ascii "$VER: kittycompact.library 53.2 (16.3.2020)"
.byte 0
.endm
