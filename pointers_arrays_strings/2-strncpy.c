#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes to copy.
 * Return: pointer to resulting string.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
