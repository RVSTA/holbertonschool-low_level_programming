#include "main.h"
/**
 *swap_int - swaps values of to int.
 *@a: first int
 *@b: second int
 *Return: none
 */
void swap_int(int *a, int *b)
{
	int wwe = *a;

	*a = *b;
	*b = wwe;
}
