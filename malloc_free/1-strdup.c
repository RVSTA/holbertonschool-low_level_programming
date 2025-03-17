#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the given string.
 * @str: This is the string
 * Return: function returns a pointer to the duplicated string. NULL
 * if insufficient memory was available.
 */
char *_strdup(char *str)

{
	char *gtr;
	int hbo, b;

	if (str == NULL)
		return (NULL);

	for (hbo = 0; str[hbo] != '\0'; hbo++)
		;
	gtr = (char *)  malloc((hbo + 1) * sizeof(char));

	if (gtr == NULL)
		return (NULL);

	for (b = 0; b < hbo ; b++)
		gtr[b] = str[b];

	gtr[hbo + 1] = '\0';
	return (gtr);
}
