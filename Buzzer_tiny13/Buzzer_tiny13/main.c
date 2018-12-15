/*
 * Buzzer.cpp
 *
 * Created: 15.12.2018 22:01:59
 * Author : mini
 */

#include <avr/io.h>

void delay_nop(int delay)
{
	int i = 0;
	while(i<delay)
	{
		i++;
	}
}

void setup(void)
{
	DDRB |= (1<<3);
	DDRB |= (1<<4);
}

void loop(void)
{
	PORTB =  (1<<3);
	
	delay_nop(1000);
	
	PORTB =  (1<<4);
	
	delay_nop(1000);
}


int main(void)
{
	setup();
	
	while(1)	
	{
	loop();		
	}
	return 0;
}
