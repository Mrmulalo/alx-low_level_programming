#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to check.
 * Return: the last digit
*/
int print_last_digit(int n)
{
	int l_digit;

	if (n < 0)
		n = -n;

	l_digit = n % 10;
	_putchar(l_digit + '0');

	return (l_digit);
}
