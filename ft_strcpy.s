global ft_strcpy
section	.text
ft_strcpy:
	xor         rax, rax
	jmp			copy

copy:
	mov			dl, [rsi + rax]
	cmp			dl, 0
	je			exit
	mov			[rdi + rax], dl
	inc			rax
	jmp			copy
	
exit:
	mov			byte [rdi + rax], 0
	mov			rax, rdi
	ret

