#include <stdio.h>
/**
 *main - program that prints either number
 *or fizz or buzz or fizzBuzz
 *Return: returns 0
 */
int main(void)
{
	int poo = 0;

	while (poo++ < 100)
	{
		if ((poo % 3 == 0) && (poo % 5 == 0))
			printf("FizzBuzz");

		else if ((poo % 3) == 0)
			printf("Fizz");
		else if ((poo % 5) == 0)
			printf("Buzz");
		else
			printf("%d", poo);

		if (poo < 100)
			printf(" ");
	}

	return (0);
}
