#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)

{
	unsigned int bee;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (bee = 0; bee < n; bee++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
