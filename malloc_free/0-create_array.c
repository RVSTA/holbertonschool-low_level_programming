#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars, initializes it with specific char
 * @size: size of the array to create
 * @c: char to initialize  array c
 * Return: pointer to array (Succ) if NULL (Err)
 */
char *create_array(unsigned int size, char c)

{
	char *bee;
	unsigned int hun = 0;

	if (size == 0)
		return (NULL);

	bee = (char *) malloc(sizeof(char) * size);

	if (bee == NULL)
		return (0);

	while (hun < size)
	{
		*(bee + hun) = c;
		hun++;
	}

	*(bee + hun) = '\0';

	return (bee);
}
