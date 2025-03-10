#include "main.h"
/**
 *_strcat - Write a function that concatenates two strings.
 *@dest: This is the output dest
 *@src: This is the input source
 * Return: This return connects two strings
 */
char *_strcat(char *dest, char *src)

{
	int i, f;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (f = 0; src[f] != '\0'; f++)
	{
		dest[i] = src[f];
		i++;
	}
	return (dest);
}
