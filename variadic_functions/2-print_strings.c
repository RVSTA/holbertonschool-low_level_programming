#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int b;
	char *pro;

	va_list list;

	va_start(list, n);

	for (b = 0; b < n; b++)
	{
		pro = va_arg(list, char *);
		if (!pro)
			pro = "(nil)";
		if (!separator)
			printf("%s", pro);
		else if (separator && b == 0)
			printf("%s", pro);
		else
			printf("%s%s", separator, pro);
	}

	printf("\n");

	va_end(list);
}
