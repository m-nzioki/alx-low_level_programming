#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all single digits of base 10
 * using putchar.
 * the argument to putchar is the ASCII code of the character you want to print
 * 0 to 9 are encoded from 48 to 57.
 * Thus why we add 48
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}
