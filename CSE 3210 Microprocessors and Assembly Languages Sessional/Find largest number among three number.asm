;Find largest number among three number
.model small
.stack 100h
.data
msg1 db "Enter first number: $"
msg2 db 10,13,"Enter second number: $"  
msg3 db 10,13,"Enter third number: $"
result db 10,13,"Largest number is : $" 
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
    
    cmp bl,bh
    jg level1
    jmp level2
             
    level1:
    cmp bl,cl
    jg displaybl
    jmp level3
    
    level2:
    cmp bh,cl
    jg displaybh
    jmp level4
    
    level3:
    cmp cl,bh
    jg displaycl 
    
    level4:
    cmp cl,bl
    jg displaycl
    
    displaybl:
    mov ah,2
    mov dl,bl
    int 21h 
    jmp exit 
    
    displaybh:
    mov ah,2
    mov dl,bh
    int 21h
    jmp exit  
    
    displaycl:
    mov ah,2
    mov dl,cl
    int 21h 
    jmp exit 
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main  