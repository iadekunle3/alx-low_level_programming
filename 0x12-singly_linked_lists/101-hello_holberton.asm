section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, hello     ; format
    xor rax, rax       ; vararg count

    ; Call printf
    call printf

    ; Return from main
    mov eax, 0x60      ; syscall number (sys_exit)
    xor edi, edi       ; exit code
    syscall            ; call kernel

