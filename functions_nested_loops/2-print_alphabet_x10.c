#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet x10 and New Line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int p = 0;
	char ch;

	while (p++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
