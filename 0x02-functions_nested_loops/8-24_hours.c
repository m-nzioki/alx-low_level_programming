#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour < 24; hour++)

		for (min = 0; min < 60; min++)

			if (hour / 10 == 0 && min / 10 == 0)
			{
				_putchar('0');
				_putchar('0' + hour);
				_putchar(':');
				_putchar('0');
				_putchar('0' + min);
				_putchar('\n');
			}
			else if (hour / 10 == 0 && min / 10 > 0)
			{
				_putchar('0');
				_putchar('0' + hour);
				_putchar(':');
				_putchar('0' + (min / 10));
				_putchar('0' + (min % 10));
				_putchar('\n');
			}
			else if (hour / 10 > 0 && min / 10 == 0)
			{
				_putchar('0' + (hour / 10));
				_putchar('0' + (hour % 10));
				_putchar(':');
				_putchar('0');
				_putchar('0' + min);
				_putchar('\n');
			}
			else
			{
				_putchar('0' + (hour / 10));
				_putchar('0' + (hour % 10));
				_putchar(':');
				_putchar('0' + (min / 10));
				_putchar('0' + (min % 10));
				_putchar('\n');
			}
}
