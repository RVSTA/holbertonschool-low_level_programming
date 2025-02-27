#include "main.h"
/**
 *print_square - prints square followed by new line.
 *@size: is parameter
 *Return: none
 */
void print_square(int size)

{
	int htc, htc1;

	if (size > 0)
	{
		for (htc = 0; htc < size; htc++)
		{
			for (htc1 = 0; htc1 < (size - 1); htc1++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
