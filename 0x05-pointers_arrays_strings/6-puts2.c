#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: string.
 * Return: void.
 */
void puts2(char *str)
{
	int i;
	int len;

	len  = _strlen(str);
	for (i = 0; i < len; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
