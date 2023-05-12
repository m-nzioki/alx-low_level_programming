#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * the numbers range from 0 to 99.
 * the combination is seperated by a comma followed by a space
 * Return: 0 when successful
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			if (j > i)
			{
				putchar(48 + (i / 10));
				putchar(48 + (i % 10));
				putchar(' ');
				putchar(48 + (j / 10));
				putchar(48 + (j % 10));
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
