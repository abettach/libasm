section .text
    global _ft_strcmp

_ft_strcmp:
    xor rcx, rcx
    jmp _loop

_loop:
    mov dl, [rdi + rcx]
    cmp dl, byte 0 
    jz _ret
    cmp [rsi + rcx], byte 0
    jz _ret
    cmp dl, [rsi + rcx]
    jne _ret
    inc rcx                                                                                                                        
    jmp _loop

_ret:
    sub dl, [rsi + rcx]
    jl _negative
    jg _postive
    jz _equal
	ret
_negative:
    mov rax, -1
    ret

_postive:
    mov rax, 1
    ret
_equal:
    mov rax, 0
    ret