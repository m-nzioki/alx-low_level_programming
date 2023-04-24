#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc - arguments count
 * @argv - array of pointers to the arguments passed
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
