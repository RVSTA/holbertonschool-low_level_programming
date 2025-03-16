#include "main.h"
/**
 * *_strspn - finds the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match
 * Return: number of bytes in the first segment of s that 
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)

{
	int o, e, l, boss;

	l = 0;

	for (o = 0; s[o] != '\0'; o++)
	{
		boss = 0;
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[o] == accept[e])
			{
				l++;
				boss = 1;
			}
		}
		if (boss == 0)
		{
			return (l);
		}
	}

	return (0);
}
