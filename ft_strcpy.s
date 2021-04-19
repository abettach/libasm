section .text
    global _ft_strcpy

_ft_strcpy:
	xor		rcx, rcx
_cpy:
    mov dl, [rsi + rcx] 
    cmp dl, byte 0
    jz _end
    mov [rdi + rcx], dl
    inc rcx
    jmp _cpy
_end:
    mov [rdi + rcx], byte 0
    ret