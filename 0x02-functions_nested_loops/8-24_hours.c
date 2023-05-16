#include "main.h"

/**
 *jack_bauer - prints every minute of the day from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(48 + (hour / 10));
			_putchar(48 + (hour % 10));
			_putchar(':');
			_putchar(48 + (min / 10));
			_putchar(48 + (min % 10));
			_putchar('\n');
		}
	}
}
