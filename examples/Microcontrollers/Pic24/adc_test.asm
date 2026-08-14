;#define __24FJ64GA010
#define __24FJ16GA004

.global __ADC1Interrupt
.global __reset

;#include "p24fj64GA010.gld"
#include "p24fj16GA004.gld"
#include "p24Fxxxx.inc"

.text
__reset:
    MOV #0xC000, W0
    MOV W0,TRISB   ; configure RB15(AN9) and RB14 (AN10) as input

    MOV #0x3FFF, W0
    MOV W0,  AD1PCFG   ; configure RB15(AN9) and RB14 (AN10) as analog

    CALL AdcInit    
    CLR LATB

LOOP: BRA LOOP

AdcInit:
    MOV #0x6000, W0
    MOV W0, AD1CON2    ; VRef+ and VRef- are used as reference voltage pin

    MOV #0x0164, W0
    MOV W0, AD1CON3    ; 100 cycles for each conversion. System clock used

    MOV #9, W0
    MOV W0, AD1CHS       ; Select AN9 (RB15) as reference voltage pin
    CLR AD1CSSL

    MOV #0x80E4, W0
    MOV W0, AD1CON1    ; start ADC with auto conversion mode

    BSET IPC3,#6              ; set ADC interrupt priority level 6
    BSET IPC3,#5
    BCLR IPC3,#0

    BCLR IFS0,#AD1IF      ; clear AD1IF flag
    BSET IEC0,#AD1IE     ; enable AD1IE bit

    RETURN;

__ADC1Interrupt:
    BCLR IFS0,#AD1IF
    MOV #0xFC00,W2

    MOV LATB,W0
    AND W2,W0,W0

    MOV ADC1BUF0,W1
    AND #0x03FF,W1

    IOR W0,W1,W0

    MOV W0,LATB
    RETFIE
