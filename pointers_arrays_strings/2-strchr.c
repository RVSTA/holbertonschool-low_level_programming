#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 * Return: a pointer to the first instance of the character
 * c in the string s or NULL if character not found
 */
char *_strchr(char *s, char c)

{
		int z;

		while (1)
		{
			z = *s++;
			if (z == c)
			{
				return (s - 1);
			}
			if (z == 0)
			{
				return (NULL);
			}
		}
}
