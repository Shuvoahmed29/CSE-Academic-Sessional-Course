;Number Sequence Printing Exercise: Generating 1 to 10     
.model small
.stack 100h
.code
main proc
    mov cx,10
    
    mov ah,2
    mov dl,'0'
    
    display:
    int 21h
    inc dl
    cmp dl,'9'
    jbe display
    jmp bigNumber
    
    bigNumber: 
    mov bl,dl
    
    mov ah,2
    mov dl,'1'
    int 21h 
    
    sub bl,10
    mov ah,2
    mov dl,bl
    int 21h 
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main