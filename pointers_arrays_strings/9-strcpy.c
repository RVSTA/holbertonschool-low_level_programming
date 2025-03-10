#include "main.h"

/**
 * _strcpy - Copies the string pinted by src incl the (\0)
 * @dest: Pointer to the buff where we copy the string.
 * @src: To be copied
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)

{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
