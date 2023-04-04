#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: pointer to input string
 * @c:character to locate.
 * Return: a pointer to the first occurrence of
 * the character c in the string s or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
