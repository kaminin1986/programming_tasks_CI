	.file	"main.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "String \0"
.LC1:
	.ascii "Hello, World!!!\0"
.LC2:
	.ascii "%s\15\12\0"
.LC3:
	.ascii "Char: \0"
.LC4:
	.ascii "%c/r/n\0"
.LC5:
	.ascii "Signed integer: \0"
.LC6:
	.ascii "%u\15\12\0"
.LC7:
	.ascii "Unigned integer: \0"
.LC8:
	.ascii "Signed short: \0"
.LC9:
	.ascii "%hd\15\12\0"
.LC10:
	.ascii "Unsigned short: \0"
.LC11:
	.ascii "%hu\15\12\0"
.LC12:
	.ascii "Signed long: \0"
.LC13:
	.ascii "%I64d\15\12\0"
.LC14:
	.ascii "Unsigned long: \0"
.LC15:
	.ascii "%llu\15\12\0"
.LC16:
	.ascii "float: \0"
.LC17:
	.ascii "%f\15\12\0"
.LC18:
	.ascii "Double: \0"
.LC19:
	.ascii "%lf\15\12\0"
.LC20:
	.ascii "Hex: \0"
.LC21:
	.ascii "0x%llX\15\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$48, %rsp
	.seh_stackalloc	48
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC1(%rip), %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC4(%rip), %rax
	movl	$131, %edx
	movq	%rax, %rcx
	call	printf
	leaq	.LC5(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC6(%rip), %rax
	movl	$-1294967296, %edx
	movq	%rax, %rcx
	call	printf
	leaq	.LC7(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC6(%rip), %rax
	movl	$3000000000, %edx
	movq	%rax, %rcx
	call	printf
	leaq	.LC8(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC9(%rip), %rax
	movl	$40000, %edx
	movq	%rax, %rcx
	call	printf
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC11(%rip), %rax
	movl	$40000, %edx
	movq	%rax, %rcx
	call	printf
	leaq	.LC12(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movq	$-1, %rbx
	movl	$0, %esi
	movq	%rbx, -16(%rbp)
	movq	%rsi, -8(%rbp)
	leaq	-16(%rbp), %rax
	leaq	.LC13(%rip), %rcx
	movq	%rax, %rdx
	call	printf
	leaq	.LC14(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movq	%rbx, -16(%rbp)
	movq	%rsi, -8(%rbp)
	leaq	-16(%rbp), %rax
	leaq	.LC15(%rip), %rcx
	movq	%rax, %rdx
	call	printf
	leaq	.LC16(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movabsq	$4623201722859257856, %rax
	movq	%rax, %xmm0
	movq	%rax, %rdx
	leaq	.LC17(%rip), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	leaq	.LC18(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movabsq	$4668012723085630327, %rax
	movq	%rax, %xmm0
	movq	%rax, %rdx
	leaq	.LC19(%rip), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	leaq	.LC20(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC21(%rip), %rax
	movl	$3000000000, %edx
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev5, Built by MSYS2 project) 16.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
