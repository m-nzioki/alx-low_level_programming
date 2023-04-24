#include "main.h"

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: pointer to string arguments passed
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", (i * j));
	return (0);
}
