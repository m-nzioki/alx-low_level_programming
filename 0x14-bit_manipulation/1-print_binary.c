#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int x;
	int i, j = 0;

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;

		if (x & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
