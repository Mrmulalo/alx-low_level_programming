#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input sring.
 * Return: void.
 */
void puts_half(char *str)
{
	int i;
	int len;

	len  = _strlen(str);
	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len - 1) / 2;

	for (i = len; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
