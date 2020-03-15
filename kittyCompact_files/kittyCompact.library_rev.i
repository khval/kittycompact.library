VERSION		EQU	53
REVISION	EQU	1

DATE	MACRO
		dc.b '3.3.2020'
		ENDM

VERS	MACRO
		dc.b 'kittyCompact.library 53.1'
		ENDM

VSTRING	MACRO
		dc.b 'kittyCompact.library 53.1 (3.3.2020)',13,10,0
		ENDM

VERSTAG	MACRO
		dc.b 0,'$VER: kittyCompact.library 53.1 (3.3.2020)',0
		ENDM
