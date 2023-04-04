#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to a string.
 * @b: character to for filling in .
 * @n: number of first memory blocks to be filled.
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = b;
	return (s);
}
