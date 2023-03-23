#include "main.h"
/**
 * print_line - draws a straight line in the terminal using '_'
 * @n: number of times the character _ should be printed
 * return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
