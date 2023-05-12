#include <stdio.h>

/**
 * main -prints all single digits of base 10
 * using putchar, seperated by a comma and a space
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
