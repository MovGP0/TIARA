
processor 16f73        ;Set the processor
radix hex              ;Set the radix
#include <p16f73.inc>  ;Include header file


TEMP1       equ 20H
TEMP2       equ 21H
                

;

org 00H
	goto main
	
org 04H
	goto int_serv
	
main
        bsf     STATUS, 5   ;bank 1
        movlw 	0xff
        movwf	TRISA
        clrf    TRISB       
        bcf     STATUS, 5   ;bank 0     
        
        bsf   	STATUS,5
        movlw 	1
        movwf 	ADCON1
        bcf   	STATUS,5
        movlw	5
        movwf	ADCON0
        
        bsf   	STATUS,5
        bsf	PIE1, ADIE
        bcf   	STATUS,5

        bsf	INTCON, PEIE
        bsf 	INTCON, GIE
        bcf	PIR1, ADIF
        
pt1
	incf 	TEMP1, f
	goto 	pt1
	

int_serv
	movf 	ADRES, W
	movwf 	PORTB
        movlw	5
    	movwf	ADCON0
	retfie


end


