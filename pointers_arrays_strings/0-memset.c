#include "main.h"
/**
 * *_memset - a constant byte that fills the memory
 * @s: area to be filled
 * @b: char to copy
 * @n: number of times to copy b*
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}

	return (s);
}
