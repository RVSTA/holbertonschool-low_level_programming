#include "main.h"
#include <stdio.h>
/**
 *print_numbers - Prints numbers form 0 to 9
 *Return: no return
 */
void print_numbers(void)
{
	int number = 48;

	for (; number < 58; number++)
		_putchar(number);

	_putchar(10);
}
