
.text
.globl sumArray
.type  sumArray, @function

sumArray:
    xorl    %eax, %eax
    xorl    %ecx, %ecx

.Lloop:
    cmpq    %rsi, %rcx
    jge     .Ldone
    addl    (%rdi,%rcx,4), %eax
    incq    %rcx
    jmp     .Lloop

.Ldone:
    ret

.section .note.GNU-stack,"",@progbits

