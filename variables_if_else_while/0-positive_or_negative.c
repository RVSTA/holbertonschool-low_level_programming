#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Will assign a random number to the variable each time its executed.
 *
 * Return: value 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
