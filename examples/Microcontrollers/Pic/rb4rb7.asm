processor 16f84        ;Set the processor
radix hex              ;Set the radix
#include <p16f84.inc>  ;Include header file


COUNTER		equ	0CH
TEMP		equ	0DH
                

;

     ORG 000H

     GOTO MAIN

     ORG 004H

     GOTO INT_SERV

MAIN:
     BSF STATUS, RP0     ; bank 1
     
     MOVLW 0xFF
     MOVWF TRISB
     
     MOVLW 0
     MOVWF TRISA
     
     BCF STATUS, RP0     ; back to bank 0

     CLRF COUNTER        ; zero the counter

     BCF OPTION_REG, 7   ; 
     BCF INTCON, RBIF    ; clear the appropriate flag
     BSF INTCON, RBIE    ; mask for external interrupts
     BSF INTCON, GIE     ; enable interrupts

PT1: INCF TEMP, F
     GOTO PT1

INT_SERV:
     INCF COUNTER, F   
     
     MOVF    COUNTER, 0
     MOVWF   PORTA
         
     BCF INTCON, RBIF    ; clear the appropriate flag
     RETFIE              ; this also set global interrupt enable

     END
