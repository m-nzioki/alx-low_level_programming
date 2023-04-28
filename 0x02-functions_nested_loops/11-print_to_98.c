#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number where the counting starts from
 *
 */

void print_to_98(int n)
{
	int x;

	x = n;
	
	if (x == 98)
	{
		_putchar(48 + (x / 10));
		_putchar(48 + (x % 10));
	}

	for (x = n; x < 98; x++)
	{
		if (x > 9)
		{
			_putchar(48 + (x / 10));
			_putchar(48 + (x % 10));
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(48 + x);
			_putchar(',');
			_putchar(' ');
		}

		if (x == 98)
		{
		_putchar(48 + (x / 10));
		_putchar(48 + (x % 10));
		}
		
	}

	for (x = n; x > 98; x--)
	{
		_putchar(48 + (x / 10));
		_putchar(48 + (x % 10));
		_putchar(',');
		_putchar(' ');
		
		if (x == 98)
		{
		_putchar(48 + (x / 10));
		_putchar(48 + (x % 10));
		}
	}
		
	_putchar('\n');
}
