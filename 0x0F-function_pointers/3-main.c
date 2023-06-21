#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - outputs the results of simple arithmetic operations
 * @argc: number of arguments passed
 * @argv: array of pointers to the argument
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int x, y, result;
	char *op;

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '%' && y == 0) || (*op == '/' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op)(x, y);

	printf("%d\n", result);

	return (0);
}

