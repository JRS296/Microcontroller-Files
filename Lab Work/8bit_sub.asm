data segment
a db 09h
b db 02h
c dw ?
data ends
 
code segment
assume cs:code,ds:data
start:
mov ax,data
mov ds,ax
mov al,a
mov bl,b
sub al,bl
mov c,ax
int 3
code ends
end start