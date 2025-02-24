#include <stdio.h>
#include "main.h"
/**
 *_isupper - Function that check for uppercase characters.
 *@c: character
 *Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
