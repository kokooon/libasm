global ft_strlen
section     .text
ft_strlen:
	test		rdi, rdi
	jz			error
	mov			rcx, max_length
    xor         rax, rax
    jmp         loop
loop:
    cmp         BYTE [rdi + rax], 0
    je          exit
    inc         rax
	cmp			rax, rcx
	ja			error
    jmp         loop
exit:
    ret
error:
	mov			rax, -1
	ret
section .data
max_length	equ	5