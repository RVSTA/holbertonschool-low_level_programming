#include <stdio.h>

/**
  * main: Prints numbers since 0 to 9
  *
  * Return: 0
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
