#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @i:the number
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int last;

	if (i < 0)
		i = i * -1;

	last = i % 10;

	if (last < 0)
		last = last * -1;

	_putchar(48 + last);

	return (last);
}
