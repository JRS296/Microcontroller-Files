ORG 00H
MOV DPTR,#2040H  ; get 2040H into DPTR
MOV A,#2BH              ;get lower byte of second 16-bit number on accumulator
MOV R0,#20H            ;get higher byte of second 16-bit number on accumulator
ADD A,82H                  ;[A]+[DPL]
MOV 82H,A                 ;save result of lower byte addition
MOV A,R0                    ;get higher byte of second number in A
ADDC A,83H                 ;[A]+[DPH]
MOV 83H,A                 ;Save result of higher byte addition
END