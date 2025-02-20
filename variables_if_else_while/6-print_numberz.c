#include <stdio.h>

/**
  * main - Prints numbers 0 to 9
  *
  * Return: (0)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
