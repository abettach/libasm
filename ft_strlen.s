section .text
        global _ft_strlen

_ft_strlen:
        xor rax, rax
_loop:
        cmp [rdi + rax], byte 0
        jz _end
        inc rax
        jmp _loop
_end:
        ret