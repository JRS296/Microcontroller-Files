ORG 00H
MOV A,51H      ;get content of memory location 51H to accumulator
MOV 0F0H,52H;get content of memory location 52H to B register
MUL AB              ;multiply content of A with content of B
MOV 53H,A        ;get lower order byte of product in memory location 53H
MOV54H,0F0H  ;get higher order byte of product in memory location in  54H
MOV A,51H         ;get content of memory location 51H to accumulator
MOV 0F0H,52H  ;get content of memory location 52H to register B
DIV AB                  ;divide content of register A with register B
MOV 55H,A          ;Copy quotient of result to memory location 55H
MOV 56H,0F0H   ;copy remainder of result to memory location 56H
END