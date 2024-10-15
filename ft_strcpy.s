global ft_strcpy
section	.text
ft_strcpy:
	xor         rax, rax
	jmp			copy

copy:
	cmp			byte[rsi + rax]
	je			exit
	mov			dl, [rsi + rax]
	mov			[rdi + rax], dl
	inc			rax
	jmp			copy
	
exit:
	mov			[rdi + rax], 0
	mov			rax, rdi
	ret

