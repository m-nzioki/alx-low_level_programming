#include "main.h"
#include <unistd.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k  = i * j;
			if (k > 9 && j < 9)
			{
				_putchar(' ');
				_putchar(48 + (k / 10));
				_putchar(48 + (k % 10));
				_putchar(',');
			}
			else if (k > 9 && j == 9)
			{
				_putchar(' ');
				_putchar(48 + (k / 10));
				_putchar(48 + (k % 10));
			}
			else if (k <= 9 && j == 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + k);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + k);
				_putchar(',');
			}

		}
			_putchar('\n');
	}
}

