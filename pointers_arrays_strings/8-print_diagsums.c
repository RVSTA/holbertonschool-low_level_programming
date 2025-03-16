#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints two diagonals wich sums a square matrix of int
 * @a: square matrix were we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)

{
	int p;

	unsigned int atsar, rasta;

	atsar = 0;
	rasta = 0;

	for (p = 0; p < size; p++)
	{
		atsar += a[(size * p) + p];
		rasta += a[(size * (p + 1)) - (p + 1)];
	}

	printf("%d, %d\n", atsar, rasta);
}
