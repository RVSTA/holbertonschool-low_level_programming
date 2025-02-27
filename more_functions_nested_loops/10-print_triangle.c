#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: is parameter
 *Return: none
 */
void print_triangle(int size)
{
	int thc, thc1;

	if (size > 0)
	{
		for (thc = 1; thc <= size; thc++)
		{
			for ((thc1 = size - thc); thc1 > 0; thc1--)
				_putchar(' ');

			for (thc1 = 0; thc1 < thc; thc1++)
				_putchar('#');

			if (thc == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
