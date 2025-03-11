#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)

{
	int l, r, tmp;

	r = n - 1;

	for (l = 0; l < n / 2; l++)
	{
		tmp = a[l];
		a[l] = a[r];
		a[r--] = tmp;
	}
}
