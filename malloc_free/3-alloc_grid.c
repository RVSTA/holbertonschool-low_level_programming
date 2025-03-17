#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Creates a 2D int array.
 * @width: Matrix width
 * @height: Matrix height
 * Return: Pointer to matrix or NULL on failure.
 */
int **alloc_grid(int width, int height)

{
	int **leo;
	int p, q;

	if (width < 1 || height < 1)
		return (NULL);

	if (!(leo = malloc(sizeof(int *) * height)))
		return (NULL);

	for (p = 0; p < height; p++) 
	{
		if (!(leo[p] = malloc(sizeof(int) * width)))
		{
			while (p--)
				free(leo[p]);
			free(leo);
			return (NULL);
		}
		for (q = 0; q < width; q++)
			leo[p][q] = 0;
	}
	return (leo);
}
