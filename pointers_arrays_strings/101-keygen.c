#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)

{
	int pass[100];
	int z, win, n;

	win = 0;	

	srand(time(NULL));

	for (z = 0; z < 100; z++)
	{
		pass[z] = rand() % 78;
		win += (pass[z] + '0');
		putchar(pass[z] + '0');
		if ((2772 - win) - '0' < 78)
		{
			n = 2772 - win - '0';
			win += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
