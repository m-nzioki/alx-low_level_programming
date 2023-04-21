#include "function_pointers.h"

/**
 * int_index - searches for an interger value in an array
 * @array: the array
 * @size: number of elements in the array
 * @cmp: pointer to the function that compare values
 *
 * Description: if no element is an integer, or size is <= 0 it returns -1
 * Return: index to the int first element
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
