section .data
    msg db 'Hello, Holberton', 10, 0 ; The message to print, followed by newline and null terminator

section .text
    global main
    extern printf

main:
    ; Align the stack to 16 bytes
    sub rsp, 8

    ; Set up the argument for printf (the message to print)
    mov rdi, msg

    ; Call printf
    call printf

    ; Restore the original stack alignment
    add rsp, 8

    ; Exit using ret
    ret

