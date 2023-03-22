#include "unistd.h"
#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @i: number
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int x;
	int last;

	x = i;

	if (x >= 0)
	{
		last = ('0' + (x % 10));
		_putchar(last);
	}
	else
	{
		x = x * -1;
		last = ('0' + (x % 10));
		_putchar(last);
	}

	return (last);
}
