#include <stdio.h>

/**
 * main - Entry point
 *
 * printing the alphabet in lowercase
 * except the letters q and e using putchar
 * Return: 0 when successful
 *
 */

int main(void)
{
	char ch;

	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}

	}
	putchar('\n');
	return (0);
}
