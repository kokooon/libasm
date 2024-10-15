global ft_strcmp
section	.text
ft_strcmp:
	xor			rax, rax
	jmp			boucle

boucle:
	mov			bl, byte [rsi + rax]
	mov			dl, byte [rdi + rax]
	cmp			bl, dl
	jne			exit

	cmp			bl, 0
	je			exit
	cmp			dl, 0
	je			exit

	inc			rax
	jmp			boucle
exit:
	sub			dl, bl
	movsx		rax, dl
	ret