/*
 * GccApplication1.c
 *
 * Created: 19.02.2020 10:44:02
 * Author : r.gottschalk
 */

#include <avr/io.h>

int main(void)
{

	DDRB = 0x00;
	PORTB = 0xff;
	PORTA = 0xff;
	DDRA = 0xff;

	unsigned char t1 = 0;
	unsigned char t2 = 0;
	unsigned char L = 0;
	unsigned char Z = 0;
	unsigned char alarm = 0;

	/* Replace with your application code */
	while (1)
	{

		t1 = PINB & 0b00000001;
		t2 = PINB & 0b00000010;
		L = PINB & 0b00000100;
		Z = PINB & 0b00001000;
		if (!(t1 || t2 || L || Z))
		{
			PORTA = 0b0000;
		}
		else
		{

			PORTA = 0b00010000;
		}
	}
}
