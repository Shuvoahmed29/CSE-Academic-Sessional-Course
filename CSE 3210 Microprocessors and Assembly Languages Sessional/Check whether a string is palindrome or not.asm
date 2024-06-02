;Check whether a string is palindrome or not 
.model small
.stack 100h
.data
msg1 db "Enter String: $"
input db 100 dup('$')   
Palindrom db 10,13,"Palindrom$"  
NOTP db 10,13,"Not Palindrom$"
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
    
    lea si,[input+1]
    mov cl,[si]
    add si,1
    mov ch,0
    
    lea di,[input+2]
    add di,cx
    sub di,1
    
    Level:
    mov al,[si]
    mov bl,[di]
    cmp al,bl
    jne notPalindrom
    
    inc si
    dec di
    loop Level
    
    lea dx,Palindrom  
    jmp display
    
    notPalindrom:
    lea dx,NOTP
      
    display:
    mov ah,9
    int 21h
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main