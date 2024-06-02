;Numeric Addition Exercise: Summing Three Numbers 
.model small
.stack 100h
.data
msg1 db "Enter first number: $"
msg2 db 10,13,"Enter second number: $"  
msg3 db 10,13,"Enter third number: $"
result db 10,13,"Summing Result : $" 
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
    
    mov ah,9
    lea dx,msg2
    int 21h
    
    mov ah,1
    int 21h
    mov bh,al 
    
    mov ah,9
    lea dx,msg3
    int 21h
    
    mov ah,1
    int 21h
    mov cl,al
    
    mov ah,9
    lea dx,result
    int 21h 
    
    add bl,bh
    sub bl,48 
    add bl,cl
    sub bl,48  
    
    cmp bl,'9'
    jbe display 
    jmp bigNumber
    
    bigNumber:
    mov ah,2
    mov dl,'1'
    int 21h
    
    sub bl,10
    jmp display
    
    display:
    mov ah,2
    mov dl,bl
    int 21h
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main  