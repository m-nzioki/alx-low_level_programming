#include <unistd.h>
#include "main.h"

/**
 * print_square - prints a square using '#' characters
 * @size: determines size of the square
 *
 */

void print_square(int size)
{
	int i;
	int j;

	int z = size;

	if (z > 0)
	{
		for (i = 0; i < z; i++)
		{
			for (j = 0; j < z; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

