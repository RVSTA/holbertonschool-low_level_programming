#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.if NULL treat it
 * as empty string function and return NULL on failure
 * @s1: This is the output
 * @s2: This is the input
 * Return: Pointer will point to a newly allocated space in
 * the contents of s1, then s2.
 */

char *str_concat(char *s1, char *s2)
{
	int z, o;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (z = 0; s1[z] != '\0'; z++)
		;
	for (o = 0; s2[o] != '\0'; o++)
		;

	p = (char *) malloc(((z + o) + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (z = 0; s1[z] != '\0'; z++)
		p[z] = s1[z];
	for (o = 0; s2[o] != '\0'; o++)
		p[z++] = s2[o];

	return (p);
}
