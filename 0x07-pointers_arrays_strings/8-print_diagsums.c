#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: pointer to array.
 * @size: array size.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += *(a + i * size + i);
	for (i = 0, j = size - 1; i < size; i++, j--)
		sum2 += *(a + i * size + j);
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
