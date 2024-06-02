;Input a string and Output this string Exercise
.model small
.stack 100h
.data
msg1 db "Input data: $"
msg2 db 10,13,"Output data: $"
k db 100 dup('$')
.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,msg1
    int 21h
    
    lea dx,k
    mov ah,10
    int 21h
    
    mov ah,9
    lea dx,msg2
    int 21h
    
    lea dx,k+2
    mov ah,9
    int 21h 
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main