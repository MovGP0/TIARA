
	p = avr
	
       .include <avr\ATmega64.inc>

	rjmp reset
	nop
	rjmp external_interrupt_0
	nop

reset:
        ldi r16, 0x00
	out SPL, r16
	 
        ldi r16, 0x04
	out SPH, r16

	ldi r17,0xFF
	out DDRB,r17

	ldi r17,0x00
	out DDRD,r17

	ldi r16,0
	out EIMSK,r16

	ldi r16,0x03
	sts EICRA,r16

	ldi r16,1
	out EIMSK,r16

	ldi r16,1
	out EIFR,r16	;  EXTERNAL INTERRUPT 0

	sei

	ldi r17,0
pt1:
	nop
	rjmp pt1

external_interrupt_0:
	inc r17
	out PORTB,r17
	ldi r16,1
	out EIFR,r16
	reti
