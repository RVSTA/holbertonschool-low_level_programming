#include "main.h"
/**
* _atoi - Convert string to an integer.
* @s: Pointer to a character string.
* Return: void.
*/

int _atoi(char *s)

{
	int codes;
	unsigned int who;
	char *pimp;

	pimp = s;
	who = 0;
	codes = 1;
	while (*pimp != '\0' && (*pimp < '0' || *pimp > '9'))
	{
		if (*pimp == '-')
			codes *= -1;
		pimp++;
	}
	if (*pimp != '\0')
	{
		do {
			who = who * 10 + (*pimp - '0');
			pimp++;
		} while (*pimp >= '0' && *pimp <= '9');
	}
	return (who * codes);
}
