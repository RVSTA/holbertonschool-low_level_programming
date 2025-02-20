#include <stdio.h>
#include "main.h"
/**
 *main - Prints alphabet in lowercase + new line
 *
 * Return: Always positive
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
