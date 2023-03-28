#include "main.h"

/**
 * swap_int - swaps two integers.
 * @a: pointer to a variable to be swaped.
 * @b: pointer to a variable to be swaped.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
