#include <stdio.h>

/**
 * main - Entry point
 *
 * printing the alphabet in lowercase in reverse
 * using putchar
 * Return: 0 when successful
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
