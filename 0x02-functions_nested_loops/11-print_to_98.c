#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number where the counting starts from
 */

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);
		}
	}
	if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);
		}
	}
	if (x == 98)
		printf("%d ", x);

	printf("\n");
}
