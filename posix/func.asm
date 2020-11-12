SECTION .TEXT
	global _squit
_squit:
	mov rax, 60
	mov rdi, 0
	syscall
