#include <stdio.h>

/**
  * main - Prints reverse alphabet
  *
  * Return: (0)
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
