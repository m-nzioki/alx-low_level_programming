#include "main.h" 

/**
 * main - prints all the arguments it receives
 * @argc: argument count
 * @argv: array of pointers to the string arguments
 * Return: 0  when successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
	
