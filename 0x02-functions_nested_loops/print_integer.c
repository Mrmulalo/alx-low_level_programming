#include "main.h"
/**
 * printint - print an integer using  _putchar
 * @n: number to be printed
 * Return: void
 */
void printint(int n)
{
	int digit;
	int num;
	int count = 0;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	int num2 = num;

	while (num2 > 0)
	{
		num2 /= 10;
		count++;
	}


	while (num > 0)
	{
		digit = num % 10;
		_putchar(digit + '0');
		num /= 10;
	}
}
