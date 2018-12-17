/*
 * Buzzer.cpp
 *
 * Created: 15.12.2018 22:01:59
 * Author : mini
 */

#include <avr/io.h>
int long_delay = 300;
//int i = 0;

void delay_nop(long delay)
{
	long i = 0;
	while(i<delay)
	{
		i++;
	}
}

int main(void)
{
	DDRB |= (1<<3);
	DDRB |= (1<<4);
	
while(1)	
{
	PORTB = (1<<3);
	
	for(int i = 0;i<long_delay;i++)
	{
		asm volatile("nop");
	}

	PORTB = (1<<4);

	for(int i = 0;i<long_delay;i++)
	{
		asm volatile("nop");
	}
	
}
return 0;
}
