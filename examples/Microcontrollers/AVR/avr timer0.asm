

	p = avr
	
       .include <appnotes\m64def.inc>


	rjmp reset

.org OC0addr

	rjmp timer_0

reset:
        ldi r16, 0x00
	out SPL, r16
	 
        ldi r16, 0x04
	out SPH, r16
	
	ldi r17,0xFF    ; configured as output
	out DDRB,r17

	ldi r16,2	
	out TIMSK,r16   ; compare A enable

	ldi r16,0x30
	out OCR0,r16	; match value

	ldi r16,9
	out TCCR0,r16	; normal mode

	sei

	ldi r17,0
pt1:
	nop
	rjmp pt1

timer_0:
	inc r17
	out PORTB,r17
	reti
