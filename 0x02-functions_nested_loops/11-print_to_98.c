#include "main.h"
#include "print_integer.c"
/**
 * printinte - print an integer using  _putchar
 * @n: number to be printed
 * Return: void
*/
void printinte(int n)
{
	int digit;
	int num;
	int count = 0;
	int num2;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	num2 = num;

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

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: starting point.
 * Return: void
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i  = n; i <= 98; i++)
		{
			printint(i);
			if (i  != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (i  = n; i >= 98; i--)
		{
			printint(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
