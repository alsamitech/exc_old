SECTION .TEXT
	global _squit
_squit:
	mov eax, 1
	mov ebx, 0
	syscall
