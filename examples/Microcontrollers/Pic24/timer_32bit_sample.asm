;#define __24FJ64GA010
#define __24FJ16GA004

.global __T3Interrupt
.global __reset

;#include "p24fj64GA010.gld"
#include "p24fj16GA004.gld"
#include "p24Fxxxx.inc"

.text
__reset:
    MOV #00, W0
    MOV W0,TRISB   ; configure RB8 as output

    CLR LATB
    CALL Timer23Init32Bit

LOOP: BRA LOOP

Timer23Init32Bit:
    MOV #0x50,W0
    MOV W0,PR2

    MOV #2,W0
    MOV W0,PR3

    BCLR IFS0,#T3IF
    BSET IEC0,#T3IE

    BSET IPC2,#T3IP2       ; set int priority = 5
    BCLR IPC2,#T3IP1
    BSET IPC2,#T3IP0

    MOV #0x8008,W0        ; 32 bit mode (combined with timer3)
    MOV W0,T2CON

    RETURN;

__T3Interrupt:
    BCLR IFS0,#T3IF
    BTG LATB,#9
    RETFIE
