;Multiplication Table Generator
.model small
.stack 100h
.data
msg1 db 10,13,"Enter one integer number: $"
msg2 db 10,13,"Are you run again(Y/N)? : $" 
k db ?
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
    
    mov bh,1
    mov ch,10
    mov cl,0
    
    jmp MultiplicationTable
    
    MultiplicationTable:
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov ah,2
    mov dl,bl
    add dl,48
    int 21h
    
    mov ah,2
    mov dl,'*'
    int 21h
    
    mov al,bh
    mul bl
    
    AAM
    push ax
    
    mov ah,0
    mov al,bh
    
    AAA
    
    mov cl,ah
    mov bh,al
    
    mov ah,2
    mov dl,cl
    add dl,48
    int 21h
    
    mov dl,bh
    add dl,48 
    mov ah,2
    int 21h                 
    
    jmp MultiplicationResult
    
    MultiplicationResult:
    mov ah,2
    mov dl,'='
    int 21h
    
    pop ax
    mov dh,al
    
    mov dl,ah
    add dl,48 
    mov ah,2
    int 21h
    
    mov ah,2
    mov dl,dh
    add dl,48
    int 21h  
    
    inc bh
    dec ch  
    cmp ch,0
    jne MultiplicationTable 
    jmp Again
    
    Again:
    mov ah,9
    lea dx,msg2
    int 21h
    
    mov ah,1
    int 21h
    mov k,al
    
    cmp k,'y'
    je Input
    jmp exit
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main