section .data
hworld db "Hello, World", 10
longueur equ $-hworld

section .text
global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, hworld
	mov rdx, longueur
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
	