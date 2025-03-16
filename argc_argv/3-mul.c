#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int indx, multi;

	multi = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (indx = 1; indx < argc; indx++)
	{
		multi = multi * atoi(argv[indx]);
	}
	printf("%d\n", multi);
	return (0);
}
