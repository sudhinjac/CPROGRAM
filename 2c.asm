section .data
    num db 5                 ; number to display
    newline db 10, 0
    msgPos db 'Positive: ',0
    msgNeg db 'Negative: ',0
    mask db 128              ; 1000 0000b

section .bss
    bin resb 8               ; 8 bits only

section .text
    global _start

_start:
    ; Print Positive label
    mov eax, 4
    mov ebx, 1
    mov ecx, msgPos
    mov edx, 10
    int 0x80

    ; Print positive number
    mov al, [num]
    call print_binary

    ; Newline
    mov eax, 4
    mov ebx, 1
    mov ecx, newline
    mov edx, 1
    int 0x80

    ; Print Negative label
    mov eax, 4
    mov ebx, 1
    mov ecx, msgNeg
    mov edx, 10
    int 0x80

    ; Print negative number
    mov al, [num]
    neg al
    call print_binary

    ; Newline
    mov eax, 4
    mov ebx, 1
    mov ecx, newline
    mov edx, 1
    int 0x80

    ; Exit
    mov eax, 1
    xor ebx, ebx
    int 0x80

; -------------------------------
; print_binary: prints 8-bit AL in binary
print_binary:
    mov bl, al           ; copy AL to BL
    mov edi, bin
    mov cl, 8
    mov dl, [mask]       ; mask = 1000 0000
print_loop:
    test bl, dl
    jz bit_zero
    mov byte [edi], '1'
    jmp cont
bit_zero:
    mov byte [edi], '0'
cont:
    inc edi
    shr dl, 1
    loop print_loop

    ; write buffer
    mov eax, 4
    mov ebx, 1
    mov ecx, bin
    mov edx, 8
    int 0x80
    ret

