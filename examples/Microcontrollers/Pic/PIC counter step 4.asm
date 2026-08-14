#include <p16f73.inc>  ;Include header file

TEMP1            equ      20H
TEMP2            equ      21H
                
port             equ      PORTC
tris_port        equ      TRISC

;

org 00H
main_start      
            clrf     port
            bsf      STATUS, 5      ;bank 1
            clrf     tris_port      ;set port to o/p
            movlw    080H
            movwf    OPTION_REG
            bcf      STATUS, 5      ;bank 0            
Loop
            movf     port, 0
            addlw    04H
            movwf    port

            movlw      001H
            movwf      TEMP1
            movwf      TEMP2
delay
            decfsz     TEMP1, F
            goto       delay
            movlw      001H
            movwf      TEMP1
            decfsz     TEMP2, F
            goto       delay            
            goto       Loop

end

