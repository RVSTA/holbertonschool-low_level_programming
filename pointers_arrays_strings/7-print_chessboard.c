#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: a 2 dimension array to print
 */
void print_chessboard(char (*a)[8])

{
	int z, up;

	for (z = 0; z < 8; z++)
	{
		for (up = 0; up < 8; up++)
		{
			_putchar(a[z][up]);
		}
		_putchar('\n');
	}
}
