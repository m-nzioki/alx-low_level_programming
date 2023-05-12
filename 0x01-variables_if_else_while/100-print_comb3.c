#include <stdio.h>

/**
 * main - prints all possible differnt combinations of two digits
 * in ascending order.
 * Only the smallest combination is printed
 * Return: 0 when successful
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(48 + i);
				putchar(48 + j);
				if (i != 8 || j != 9)
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
