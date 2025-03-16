#include "main.h"
/**
 * _strspn - finds the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match
 * Return: number of bytes in the first segment of s that
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, j, counter;

	counter = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[index])
			{
				counter++;
				break;
			}
		}
		if (accept[j] != s[index])
		{
		break;
		}
	}
	return (counter);
}
