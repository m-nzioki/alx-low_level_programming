#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *s, *deli = "";
	int i = 0;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", deli, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", deli, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", deli, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", deli, s);
					break;
				default:
					i++;
					continue;
			}
			deli = ",";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
