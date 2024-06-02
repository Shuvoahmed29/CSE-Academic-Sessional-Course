;Simple Calculator 
.model small
.stack 100h
.data    
msg1 db 10,13,"Enter first number : $"     
msg2 db 10,13,"Enter second number : $" 
msg3 db 10,13,"Enter your Choice :  $" 
msg4 db 10,13,"Press 1 for addition.$"  
msg5 db 10,13,"Press 2 for substraction.$"
msg6 db 10,13,"Press 3 for multiplication.$"
msg7 db 10,13,"Press 4 for division.$" 
msg8 db 10,13,"Addition Result is : $"  
msg9 db 10,13,"Substraction Result is : $"    
msg10 db 10,13,"Multiplication Result is : $" 
msg11 db 10,13,"Division Result is : $"   
msg12 db 10,13,"Invalid input. Try again. $"
.code
main proc
    mov ax,@data
    mov ds,ax
    
    Input:
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
    
    jmp Choice     
    
    Choice:
    mov ah,9
    lea dx,msg4
    int 21h  
    
    mov ah,9
    lea dx,msg5
    int 21h  
    
    mov ah,9
    lea dx,msg6
    int 21h  
    
    mov ah,9
    lea dx,msg7
    int 21h  
    
    mov ah,9
    lea dx,msg3
    int 21h  
    
    mov ah,1
    int 21h
    mov cl,al   
    sub cl,48
    
    cmp cl,1
    je Addition
    
    cmp cl,2
    je Substraction 
                      
    cmp cl,3
    je Multiplication 
    
    cmp cl,4
    je division 
    jmp Error
     
    Addition: 
    mov ah,9
    lea dx,msg8
    int 21h
    
    mov ah,2 
    add bl,bh
    add bl,48
    mov dl,bl
    int 21h
     
    jmp exit
     
    Substraction: 
    mov ah,9
    lea dx,msg9
    int 21h
    
    mov ah,2 
    sub bl,bh
    add bl,48
    mov dl,bl
    int 21h
     
    jmp exit
     
    Multiplication: 
    mov ah,9
    lea dx,msg10
    int 21h
    
    mov al,bl
    mul bh  
    mov ah,2 
    mov dl,al 
    add dl,48
    int 21h
     
    jmp exit  
    
    division:   
    mov ah,9
    lea dx,msg11
    int 21h
    
    mov al,bl
    xor ah,ah
    div bh
    mov ah,2
    mov dl,al
    add dl,48
    int 21h
     
    jmp exit
    
    Error: 
    mov ah,9
    lea dx,msg12
    int 21h
    jmp Choice 
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main