#include "main.h"
/**
 *_puts - prints a string
 * @str: string to print
 * Description: prints a string followed by new line
 * When success: return the number of characters printed
 */
void _puts(char *str)

{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
