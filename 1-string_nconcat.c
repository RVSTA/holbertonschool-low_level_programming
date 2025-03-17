#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *z;
	unsigned int p = 0, q = 0, ps1 = 0, ps2 = 0;

	while (s1 && s1[ps1])
		ps1++;
	while (s2 && s2[ps2])
		ps2++;

	if (n < ps2)
		z = malloc(sizeof(char) * (ps1 + n + 1));
	else
		z = malloc(sizeof(char) * (ps1 + ps2 + 1));

	if (!z)
		return (NULL);

	while (p < ps1)
	{
		z[p] = s1[p];
		p++;
	}

	while (n < ps2 && p < (ps1 + n))
		z[p++] = s2[q++];

	while (n >= ps2 && p < (ps1 + ps2))
		z[p++] = s2[q++];

	z[p] = '\0';

	return (z);
}
