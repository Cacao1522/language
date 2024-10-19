#file "e3-1a-ia32.s"
.intel_syntax noprefix
.text
.globl  stack
.type stack, @function

.extern v1
.extern v2
.extern v3
.extern v4
.extern p1
.extern p2
.extern p3
.extern p4
.extern p5

stack:
mov eax, DWORD PTR v1
mov edx, DWORD PTR v2
mov DWORD PTR p1, esp
push eax
mov DWORD PTR p2, esp
push edx
mov DWORD PTR p3, esp
pop eax
mov DWORD PTR p4, esp
pop edx
mov DWORD PTR p5, esp
mov DWORD PTR v3, eax
mov DWORD PTR v4, edx
ret
