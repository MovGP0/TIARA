#include <p16f84.inc>
    .org 0
     GOTO MAIN

MAIN:
     MOVLW 0x01         ; address
     MOVWF EEADR        ; 
     MOVLW 0x02         ; data
     MOVWF EEDATA       ; 

     BSF STATUS, RP0
     BCF EECON1, EEIF
     BSF EECON1, WREN
     MOVLW 0x55                 
     MOVWF EECON2
     MOVLW 0xAA  
     MOVWF EECON2
     BSF EECON1,WR
     
     NOP
     NOP
     

PT:  
     BTFSS   EECON1, EEIF
     GOTO PT
     BCF EECON1, EEIF

     BCF STATUS, RP0    ; Bank 0
     MOVLW 0x01         ;
     MOVWF EEADR        ; Address to read
     BSF STATUS, RP0    ; Bank 1
     BSF EECON1, RD     ; EE Read
     BCF STATUS, RP0    ; Bank 0
     MOVF EEDATA, W     ; W = EEDATA

PT1:  
     GOTO PT1
     
end

