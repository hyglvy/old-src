IFNDEF __PROFILE_INC__
__PROFILE_INC EQU 1

IF PROFILE
EXTRN _penter:NEAR
	
PROF_ENTRY MACRO
	call _penter
	ENDM
ELSE
PROF_ENTRY MACRO
	ENDM
ENDIF
	
ENDIF
