#include "main.h"

/**
 *puts_half - function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 */
void puts_half(char *str)

{
	int swagg, half;

	swagg = 0;
	while (str[swagg] != '\0')
		swagg++;

	half = swagg / 2;

	if (swagg % 2 == 1)
		half++;

	while (half < swagg)
	{
		_putchar(str[swagg]);
		half++;
	}
	_putchar('\n');
}
