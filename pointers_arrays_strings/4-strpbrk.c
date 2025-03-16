#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - searches a string of any set of bytes
 * @accept: string that contains the bytes to look for
 * @s: string to look for
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no byte found
 */
char *_strpbrk(char *s, char *accept)

{
	int z, a;

	for (z = 0; *s != '\0'; z++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
