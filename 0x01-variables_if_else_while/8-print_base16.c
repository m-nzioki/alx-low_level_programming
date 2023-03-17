#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all numbers of base 16 in lowercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	int x;
	char ch;

	for (x = 0; x <= 9; x++)
		putchar(48 + x);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

