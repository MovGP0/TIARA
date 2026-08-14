org 0x200
__reset:
BCLR 0x2C6,#0          ;config RB0 as output (TRISB addr 0x2C6)
MOV #0,W0
MOV W0,0x2C0         ;configure PORTA as output (TRISA addr 0x2C0)

BSET 0x94,#0             ;enable int0 interrupt (IEC0 = 94H)
MOV 0xA4,W0             ;IPC0 = 0xA4
AND W0,#0xFFF8,W0
IOR W0,#6,W0           ; set priority 6
MOV W0,0xA4

LOOP:
    MOV 0x2C4,W0
    ADD W0,#1,W0
    MOV W0,0x2C4
    BRA LOOP

__INT0Interrupt:
    BTG 0x2CA,#0   ; toggle RB0 (LATB = 0x2CA)
    RETFIE
