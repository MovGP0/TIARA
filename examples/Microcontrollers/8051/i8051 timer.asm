TCON        equ 88H
IE          equ A8H
TMOD        equ 89H
TH0         equ 8CH
TL0         equ 8AH


COUNTER     equ 30H

; Timer0 mode1

     ORG 000H

     SJMP MAIN

     ORG 00BH

     SJMP INT_SERV


MAIN:
     MOV COUNTER, #00H       ; zero the counter
     MOV P0, COUNTER         
     MOV TCON, #10H          ; TR0=1
     MOV TMOD, #1H           ; Mode 1: M00=1, M10=0
     MOV TL0, #FEH
     MOV TH0, #FFH
     MOV IE, #82H            ; EA=1, ET0=1

LAB1: 
     NOP
     SJMP LAB1

INT_SERV:
     INC COUNTER
     MOV P0, COUNTER         
     MOV TL0, #FEH
     MOV TH0, #FFH
     RETI                

     END
