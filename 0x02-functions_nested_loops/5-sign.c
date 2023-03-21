#include <unistd.h>
#include "main.h"

/**
 *
 * print_sign - prints the sign of a number
 * @n: number whose sign it determines
 *
 * Return: 1 if @n is greater than 0, 0 if n is 0 and -1 if n is less than 0
 *
 */

int print_sign(int n)
{
	int x;
	x = n;

	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar ('0');
	return (0);
}
