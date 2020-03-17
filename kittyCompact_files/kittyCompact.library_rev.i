VERSION		EQU	53
REVISION	EQU	2

DATE	MACRO
		dc.b '16.3.2020'
		ENDM

VERS	MACRO
		dc.b 'kittycompact.library 53.2'
		ENDM

VSTRING	MACRO
		dc.b 'kittycompact.library 53.2 (16.3.2020)',13,10,0
		ENDM

VERSTAG	MACRO
		dc.b 0,'$VER: kittycompact.library 53.2 (16.3.2020)',0
		ENDM
