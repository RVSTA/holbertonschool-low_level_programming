#include <stdio.h>
#include "main.h"
/**
 * main - Function that prints the alphabet in lowercase followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
