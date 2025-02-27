#include "main.h"
/**
 *_strlen - returns lenght of a string
 *@s: is a string
 *Return: is car
 */
int _strlen(char *s)

{
	int poop, car;

	car = 0;
	for (poop = 0; s[poop] != '\0'; poop++)
		car++;
	return (car);
}
