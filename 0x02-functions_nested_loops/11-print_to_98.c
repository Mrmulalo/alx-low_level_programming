#include "main.h"
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
