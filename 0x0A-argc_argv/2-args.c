#include <stdio.h>

/**
 * main -  prints all arguments it receives.
 * @argc: the number of arguments
 * @argv: array storing the arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
