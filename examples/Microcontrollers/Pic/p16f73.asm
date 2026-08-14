; HARDWARE SETUP                                                                
;
;           PA0..PA3  input
;           pc0..pc7  output = input+2
;
;
            INCLUDE <p16F73.inc>

FALSE			EQU		0
TRUE			EQU		1
RESET_V			EQU		0x0000			; Address of RESET Vector
ISR_V			EQU		0x0004			; Address of Interrupt
PMEM_END		EQU		0x07FF			; Last address in Program

INPUT1			EQU		21H


; Reset address. Determine type of RESET
;
            org     RESET_V             ; RESET vector location
RESET       BSF     STATUS, RP0         ; Bank 1                                
            BTFSS   PCON,NOT_POR        ; Power-up reset?
            GOTO    START               ; YES
            GOTO    OTHER_RESET         ; NO, a WDT or MCLR reset
;

    page
        org     ISR_V              ; Interrupt vector location
PER_INT_V
            BCF     STATUS, RP0    ; Bank 0


ERROR1                             ; NO, Error Condition - Unknown Interrupt
            BSF     PORTC, 0       ; Toggle a PORT pin
            BCF     PORTC, 0
            GOTO    ERROR1

            RETFIE                 ; Return / Enable Global Interrupts

;
;******************************************************************************
;*****      Start program here, Power-On Reset occurred.
;******************************************************************************
;
START                               ; POWER_ON Reset (Beginning of program)
            BCF     STATUS, RP0     ; Bank 0

            CLRF    STATUS          ; Do initialization (Bank 0)
            CLRF    INTCON
            CLRF    PIR1
            BSF     STATUS, RP0     ; Bank 1
            MOVLW   0x00            ;
            MOVWF   OPTION_REG      ;
            MOVLW   0xFF            ;
            MOVWF   ADCON1          ; Port A is Digital.
            BCF     STATUS, RP0     ; Bank 0
            CLRF    PORTA	    ; ALL PORT output should output Low.
            CLRF    PORTC	    ; ALL PORT output should output Low.
            BSF     STATUS, RP0     ; Select Bank 1
            MOVLW   0xFF
            MOVWF   TRISA           ; RA5 -  0 INPUTS
            CLRF    TRISC           ; RC Port are outputs
            BCF     STATUS, RP0     ; Select Bank 0


NEWDATA
            MOVF    PORTA, W  	    ; read keyboard input
	    ANDLW   0X0F
	    MOVWF   INPUT1	    ; store operand
ADDNUM
	    MOVLW   0x02
	    ADDWF   INPUT1,0
ENDOFPRG
	    MOVWF   PORTC
	    GOTO    NEWDATA
;
;
lzz         goto    lzz              ; Loop waiting for interrupts (for use with PICMASTER)
;
;
; Here is where you do things depending on the type of RESET (Not a Power-On Reset).
;
OTHER_RESET   BTFSS  STATUS,NOT_TO    ; WDT Time-out?
WDT_TIMEOUT   GOTO   ERROR1           ; YES, This is error condition
              goto   START            ; MCLR reset, Goto START


;
;
    org     PMEM_END                  ; End of Program Memory
            GOTO    ERROR1            ; If you get here your program was lost

    end


