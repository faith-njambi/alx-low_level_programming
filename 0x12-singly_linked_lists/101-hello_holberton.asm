section .data
	the_message db "Hello, Holberton", 0
	format db "%s", 0
	newline db 10, 0

section .text
	extern printf

global main
main:

	push rbp
	mov rbp, rsp

	mov rdi, format
	xor rax, rax

	lea rsi, [rel the_message]

	call printf

	mov rdi, newline
	xor rax, rax

	call printf

	mov rsp, rbp
	pop rbp
	ret

