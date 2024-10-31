#file "e3-1a-ia32.s"
.intel_syntax noprefix
.section .text
.globl  stack
.type stack, @function

stack:
    mov rax, v1                
    mov rdx, v2               
    mov p1, rsp             
    push rax                
    mov p2, rsp                
    push rdx                
    mov p3, rsp         
    pop rdx                   
    mov p4, rsp                
    pop rax                    
    mov p5, rsp                 
    mov v3, rax               
    mov v4, rdx                 
    ret                         
# stack:
# mov eax, DWORD PTR v1
# mov edx, DWORD PTR v2
# mov DWORD PTR p1, esp
# push eax
# mov DWORD PTR p2, esp
# push edx
# mov DWORD PTR p3, esp
# pop eax
# mov DWORD PTR p4, esp
# pop edx
# mov DWORD PTR p5, esp
# mov DWORD PTR v3, eax
# mov DWORD PTR v4, edx
# ret
