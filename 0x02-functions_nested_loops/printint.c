#include "main.h"
/**
 *printint - print an integer using _putchar.
 *@n: integer to be printed.
 *Return: void
 */
void printint(int n)
{
	int digit;
	int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	while (num > 0)
	{
		digit = num % 10;
		_putchar(digit + '0');
		num /= 10;
	}
}
