#include <xc.h>

int main(void)
{
 unsigned char count;

 TRISC = 0x00;
 count = 0;

 while (1) {
  PORTC = count;
  count++;
 }
}
