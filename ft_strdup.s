section	.text
	global	_ft_strdup
	extern	_malloc
	extern _ft_strlen
	extern _ft_strcpy
_ft_strdup:
	push	rdi
	call 	_ft_strlen
	inc		rax
	call	_malloc
	cmp		rax, 0
	jz		_err
	pop		rdi
	xor		rcx, rcx
_cpy:
	mov	dl, [rdi + rcx]
	cmp dl, byte 0
	jz _end
	mov	[rax + rcx], dl
    inc rcx
    jmp _cpy
_end:
    mov byte [rax + rcx], 0
    ret
_err:
	xor		rax, rax
    ret