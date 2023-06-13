#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of array
 * Return: NULL on failure or if any argument is <=0 else pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, x, y;

	arr = malloc(sizeof(int *) * height);

	for (i = 0; i < width; i++)
		arr[i] = malloc(sizeof(int) * width);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}

	return (arr);
}
