#include "main.h"
#include <stdio.h>
/**
 *_isdigit - checks digit 0 to 9
 *
 *@c: is a digit
 *
 *Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
