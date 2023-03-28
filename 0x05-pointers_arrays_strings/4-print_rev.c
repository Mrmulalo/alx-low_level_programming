#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer.
 * Return: void.
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
