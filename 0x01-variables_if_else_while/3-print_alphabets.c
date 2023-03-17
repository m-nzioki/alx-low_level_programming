#include <stdio.h>

/**
 * main - Entry point
 *
 * printing the alphabet in lowercase then uppercase
 * using putchar
 * Return: 0 when successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
