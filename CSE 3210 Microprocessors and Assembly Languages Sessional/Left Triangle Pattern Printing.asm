;Left Triangle Pattern Printing
.model small
.stack 100h
.data
msg1 db "Enter integer number: $"
msg2 db 10,13,"Left Triangle Pattern$"
input db 100 dup('$')
.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,msg1
    int 21h
    
    lea dx,input
    mov ah,10
    int 21h
    
    lea si,[input+2]
    mov cl,[input+1]
    
    Convert_Number:
    mov al,[si]
    sub al,48 
    cbw
    add bx,ax
    inc si
    dec cl
    
    cmp cl,0
    je Convert_done
    
    mov ax,bx
    mov bx,10
    mul bx
    mov bx,ax
    jmp Convert_Number
    
    Convert_done: 
    mov cx,bx
    mov bx,1      
    
    mov ah,9
    lea dx,msg2
    int 21h
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    level1:
    push cx
    mov cx,bx
    mov ah,2
    mov dl,'*'
    
    level2:
    int 21h
    loop level2
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
          
    inc bx      
    pop cx
    loop level1 
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main