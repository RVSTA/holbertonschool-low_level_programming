#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: string to search 
 * @needle: substring to look for
 * Return: a pointer to the beginning of the located substring
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)

{
	int b, j;

	for (b = 0; haystack[b] != '\0'; b++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[b + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[b]);
	}
	return (NULL);
}
