#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int q;
	va_list rest;

	va_start(rest, n);

	for (q = 0; q < n; q++)
	{
		if (!separator)
			printf("%d", va_arg(rest, int));
		else if (separator && q == 0)
			printf("%d", va_arg(rest, int));
		else
			printf("%s%d", separator, va_arg(rest, int));
	}

	va_end(rest);

	printf("\n");
}
