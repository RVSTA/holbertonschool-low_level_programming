#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *      starting with the first character, followed by a new line.
 * @s: This pointer point to a char or string.
 */

void puts2(char *s)

{
	int z;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(s[z]);
		}
	}
	_putchar('\n');
}
