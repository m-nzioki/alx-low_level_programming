#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @i:thei number
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int last;

	if (i >= 0)
	{
		last = i % 10;
		_putchar(last + '0');
	}
	else
	{
		last = ((i * -1) % 10);
		_putchar(last + '0');
	}

	return (last);
}
