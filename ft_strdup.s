global ft_strdup
extern malloc
extern ft_strlen
extern ft_strcpy

section .text
ft_strdup:
	push	rdi
	call	ft_strlen
	add		rax, 1
	mov		rdi, rax
	call	malloc
	test	rax, rax
	je		malloc_fail
	pop		r8
	mov		rdi, rax
	mov		rsi, r8
	call	ft_strcpy
	ret
malloc_fail:
	xor		rax, rax
	ret