#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array with integers
 * @size: number of elements in the array
 * @cmp: pointer to be used to compare values
 * Return: -1 if no elements match or if size <= 0
 * else the index of the first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
