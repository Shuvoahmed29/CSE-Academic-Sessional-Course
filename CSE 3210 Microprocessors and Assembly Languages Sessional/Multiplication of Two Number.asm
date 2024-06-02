;Multiplication of Two Number 
.model small
.stack 100h
.data
msg1 db "Enter first number: $"
msg2 db 10,13,"Enter second number: $"
result db 10,13,"Multiplication Result is: $"
.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,msg1
    int 21h
    
    mov ah,1
    int 21h
    mov bl,al
    sub bl,48
    
    mov ah,9
    lea dx,msg2
    int 21h
    
    mov ah,1
    int 21h
    mov bh,al
    sub bh,48 
    
    mov ah,9
    lea dx,result
    int 21h 
    
    mov al,bl
    mul bh 
    aam    
    
    mov bx,ax
    
    mov ah,2
    mov dl,bh
    add dl,48
    int 21h 
    
    mov ah,2
    mov dl,bl 
    add dl,48
    int 21h 
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main