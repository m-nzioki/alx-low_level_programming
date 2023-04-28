#include "main.h"
#include <unistd.h>

/**
 * print_triangle - prints a triangle using the '#' character
 * @size: determines the size of the triangle
 *
 */

void print_triangle(int size)
{
	int h; 
	int i;
	int j;

	int k = size;

	if (k > 0)
	{
		for (i = 0; i < k; i++)
		{
			for (j = (k - 1); j > i; j--)
			{
				_putchar('.');
				
				for (h = 0; h < (k - j); h++)
				{
					_putchar('#');
				}
			}
	
			_putchar('\n');
		}
	}
}
