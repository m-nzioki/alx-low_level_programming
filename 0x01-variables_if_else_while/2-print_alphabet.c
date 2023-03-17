#include <stdio.h>

/**
 * main - Entry point
 *
 * printing the alphabet in lowercase using putchar
 * Return: 0 when successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
