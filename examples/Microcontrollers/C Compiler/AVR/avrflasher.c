#include <avr/io.h>        //included so we can use the text label for ports, pins etc.

int main(void)        //All C programs need a function called main - when run, this is called before anythign else
{
 unsigned char count;

 DDRA = 0xFF;        //set all PORTA pins to output by writing 0xFF (11111111) to the DDRB register
 count = 0;

 while (1) {
  PORTA = count;
  count++;
 }
}
    
