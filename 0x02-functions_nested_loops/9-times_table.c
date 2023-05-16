#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k  = i * j;
			if (k <= 9 && j > 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + k);
				if (j < 9)
					_putchar (',');
			}
			if (j == 0)
			{
				_putchar(48 + k);
				_putchar(',');
			}
			if (k > 9)
			{
				_putchar(' ');
				_putchar(48 + (k / 10));
				_putchar(48 + (k % 10));
				if (j < 9)
					_putchar(',');
			}
		}
			_putchar('\n');
	}
}
