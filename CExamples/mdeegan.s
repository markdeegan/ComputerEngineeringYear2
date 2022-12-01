	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 0
	.globl	_whatis3plus4                   ; -- Begin function whatis3plus4
	.p2align	2
_whatis3plus4:                          ; @whatis3plus4
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	mov	w8, #3
	str	w8, [sp, #12]
	mov	w8, #4
	str	w8, [sp, #8]
	str	wzr, [sp, #4]
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #8]
	add	w8, w8, w9
	str	w8, [sp, #4]
	ldr	w0, [sp, #4]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
