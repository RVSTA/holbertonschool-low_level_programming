#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an int array
 * @min: Min value
 * @max: Max value
 * Return: Pointer to array
 */
int *array_range(int min, int max)

{
	int *gtr;
	int z, woo;

	if (min > max)
		return (NULL);

	woo = max - min + 1;
	gtr = malloc(sizeof(int) * woo);

	if (!gtr)
		return (NULL);

	for (z = 0; min <= max; z++)
		gtr[z] = min++;

	return (gtr);
}
