#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all single digits of base 10
 * using putchar, seperated by , and a space
 * the argument to putchar is the ASCII code of the character you want to print
 * 0 is ASCII code 48.
 * the space character is ASCII code 32.
 * the comma is ASCII code 44.
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
