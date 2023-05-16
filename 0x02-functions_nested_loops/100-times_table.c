#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * if n > 15 or n < 0 the function does not print anything
 * @n: the number
 */

void print_times_table(int n)
{
	int i, j, k;	
	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k  = i * j;
				if (k <= 9 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + k);
					if (j < n)
						_putchar (',');
				}
				if (j == 0)
				{
					_putchar(48 + k);
					_putchar(',');
				}
				if (k > 9 && k <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + (k / 10));
					_putchar(48 + (k % 10));
					if (j < n)
						_putchar(',');
				}
				if (k > 9 && k > 99)
				{
					_putchar(' ');
					_putchar(48 + (k / 100));
					_putchar(48 + ((k % 100) / 10));
					_putchar(48 + ((k % 100) % 10));
					if (j < n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
