global ft_write
extern __errno_location
section	.text
ft_write:
    mov         rax, 1
    syscall
	test		rax, rax
	js			error
	ret

error:
	neg			rax ;get absolute value of syscall return
	mov			rdi, rax
	call		__errno_location
	mov			[rax], rdi
	mov			rax, -1
	ret
