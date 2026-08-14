;#define __24FJ64GA010
#define __24FJ16GA004

.global __T1Interrupt
.global __T2Interrupt
.global __reset

;#include "p24fj64GA010.gld"
#include "p24fj16GA004.gld"
#include "p24Fxxxx.inc"

.text
__reset:
    BSET TRISA, #4  ; set RA4 as input for T1CK pin
    MOV #00, W0
    MOV W0,TRISB   ; configure RB8 as output

    CLR LATB
    CALL Timer1InitCounter
    CALL Timer2Init

LOOP: BRA LOOP

Timer1InitCounter:
    MOV #5,W0
    MOV W0,PR1

    BCLR IFS0,#T1IF
    BSET IEC0,#T1IE

    BSET IPC0,#T1IP2       ; set int priority = 5
    BCLR IPC0,#T1IP1
    BCLR IPC0,#T1IP0

    MOV #0x8002,W0
    MOV W0,T1CON

    RETURN;

Timer2Init:
    MOV #0x50,W0
    MOV W0,PR2

    BCLR IFS0,#T2IF
    BSET IEC0,#T2IE

    BSET IPC1,#T2IP2       ; set int priority = 5
    BCLR IPC1,#T2IP1
    BSET IPC1,#T2IP0

    MOV #0x8000,W0
    MOV W0,T2CON

    RETURN;

__T1Interrupt:
    BCLR IFS0,#T1IF
    BTG LATB,#10
    RETFIE;

__T2Interrupt:
    BCLR IFS0,#T2IF
    BTG LATB,#11
    RETFIE
