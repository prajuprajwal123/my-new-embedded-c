#define f_cpu 16000000ul
#include <avr/i0.h>
#include<util/delay.h>
int main (void)
{
  ddrc|=(1<<pbs);
  while(1){
    portc|=(1<<pc3);
    __delay_ ms(500);

    potc&=~(1<<pc3);
    _delay_ms(500);
  }
  }
  return 0;
