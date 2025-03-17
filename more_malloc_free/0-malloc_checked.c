#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: points to allocated memory
 */
void *malloc_checked(unsigned int b)

{
	void *rtp;

	rtp = malloc(b);

	if (rtp == NULL)
		exit(98);

	return (rtp);
}
