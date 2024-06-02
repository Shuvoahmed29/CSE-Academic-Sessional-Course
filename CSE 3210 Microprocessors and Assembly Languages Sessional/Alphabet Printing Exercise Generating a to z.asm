;Alphabet Printing Exercise: Generating 'a' to 'z'
.model small
.stack 100h
.code
main proc
    mov cx,26
    
    mov ah,2
    mov dl,'a'
    
    Display:
    int 21h
    inc dl
    loop Display
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main