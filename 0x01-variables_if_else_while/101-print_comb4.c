#include <stdio.h>

/**
 * main - prints all possible differnt combinations of three digits
 * in ascending order.
 * Only the smallest combination is printed
 * Return: 0 when successful
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (j > i && k > j)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(48 + k);
					if (i != 7 || j != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
