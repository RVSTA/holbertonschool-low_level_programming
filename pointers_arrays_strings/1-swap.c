#include "main.h"
/**
 *swap_int - swaps values of to int.
 *@*a: is a int
 *@*b: is a int
 *Return: 0
 */
void swap_int(int *a, int *b)

{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
