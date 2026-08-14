;#define __24FJ64GA010
#define __24FJ16GA004

.global __SPI1Interrupt
.global __reset

;#include "p24fj64GA010.gld"
#include "p24fj16GA004.gld"
#include "p24Fxxxx.inc"

SPI_DATA_ADDR equ 0x1000
SPI_REPLY_DATA equ 0x11

.text
__reset:
    MOV #0xDF00, W0 ; SCKIN = INPUT, SDI = INPUT, SDO = OUTPUT, mapped INT1 = RP8 = RB8 = INPUT, received data = RB0-7 = OUTPUT
    MOV W0, TRISB
    CLR LATB

    CALL SPI1SlaveInit

LOOP: BRA LOOP

SPI1SlaveInit:

    MOV #0x0800, W0
    MOV W0,RPINR0   ; map RP8 / RB8 pin for INT1 pin

    MOV #0x0F0E, W0 
    MOV W0, RPINR20 ; map RP14 / RB14 with SDI1IN, RP15/RB15 with SCK1IN

    MOV #0x0D1F, W0
    MOV W0,RPOR3 ; map RP13 / RB13 with SDO1OUT

    BCLR IFS0, #SPI1IF
    BSET IEC0, #SPI1IE

    BSET IPC2,#SPI1IP2   ; set interrupt priority = 7
    BSET IPC2,#SPI1IP1
    BSET IPC2,#SPI1IP0

    MOV #0x001D, W0
    MOV W0,SPI1CON1   ;  MSTEN = 0, PRESCALER = 16

    MOV #1,W0
    MOV W0,SPI1CON2           ; Disable enhanced buffer mode

    MOV #0x8014, W0      ; Enable SPI
    MOV W0, SPI1STAT

    MOV #SPI_REPLY_DATA, W0
    MOV W0,SPI_DATA_ADDR
    CALL SpiSendBlock
    RETURN;

__SPI1Interrupt:
    BCLR IFS0,#SPI1IF

SPI_READ_LOOP:
    MOV SPI1BUF,W0
    MOV.B W0,LATB
    BTSS SPI1STAT,#5   ; if SRXMPT is set, that means no data. so return    
    BRA SPI_READ_LOOP

    CALL SpiSendBlock
    RETFIE

SpiSendBlock:
    MOV SPI_DATA_ADDR,W0
    INC SPI_DATA_ADDR
    MOV W0,SPI1BUF

    MOV SPI_DATA_ADDR,W0
    INC SPI_DATA_ADDR
    MOV W0,SPI1BUF

    MOV SPI_DATA_ADDR,W0
    INC SPI_DATA_ADDR
    MOV W0,SPI1BUF

    MOV SPI_DATA_ADDR,W0
    INC SPI_DATA_ADDR
    MOV W0,SPI1BUF

    MOV SPI_DATA_ADDR,W0
    INC SPI_DATA_ADDR
    MOV W0,SPI1BUF

    MOV SPI_DATA_ADDR,W0
    INC SPI_DATA_ADDR
    MOV W0,SPI1BUF

    RETURN
