#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer to string to converted
 * Return: returns a pointer to the converted string
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= 32;
		p++;
	}
	return (str);
}
