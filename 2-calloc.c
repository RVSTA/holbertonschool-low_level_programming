#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a byte
 * @s: memory area
 * @b: byte to copy
 * @n: number of times
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
		s[p] = b;

	return (s);
}

/**
 * *_calloc - allocates memory for array
 * @nmemb: elements count
 * @size: element size
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *gtr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	gtr = malloc(size * nmemb);
	if (!gtr)
		return (NULL);

	_memset(gtr, 0, nmemb * size);
	return (gtr);
}
