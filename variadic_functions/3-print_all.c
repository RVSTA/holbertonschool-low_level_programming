#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *pro, *dic = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", dic, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", dic, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", dic, va_arg(list, double));
					break;
				case 's':
					pro = va_arg(list, char *);
					if (!pro)
						pro = "(nil)";
					printf("%s%s", dic, pro);
					break;
				default:
					a++;
					continue;
			}
			dic = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(list);
}
