; Reverse String
.model small
.stack 100h
.data
msg1 db "Enter your string: $" 
.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,msg1
    int 21h 
    
    mov cx,0
    Input:
    mov ah,1
    int 21h
    mov bl,al
    
    cmp bl,13
    je Newline
    
    push bx 
    inc cx
    jmp Input 
    
    Newline:
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    Output:
    pop dx
    int 21h
    loop Output
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main
    