#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while ((mask & n) == 0)
		mask >>= 1;

	while (mask != 0)
	{
		if ((mask & n) != 0)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
