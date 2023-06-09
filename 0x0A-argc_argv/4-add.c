#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_digit - checks a string for elements that are not digits
 * @s: the string
 * Return: 1 if any element is not a digi
 */

int check_digit(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers.
 * @argc: the numbers passed as arguments
 * @argv: array storing the arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int index;
	int result = 0;

	for (index = 1; index < argc; index++)
	{
		if (check_digit(argv[index]))
		{
			result += atoi(argv[index]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", result);
	return (0);
}
