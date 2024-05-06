global ft_strlen
section     .text
ft_strlen:
    xor         rax, rax
    jmp         loop
loop:
    cmp         BYTE [rdi + rax], 0
    je          exit
    inc         rax
    jmp         loop
exit:
    ret

