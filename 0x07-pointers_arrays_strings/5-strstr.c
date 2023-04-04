#include "main.h"
#include <stddef.h>

/**
 * _strstr - function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null
 * bytes (\0) are not compared
 * @haystack: pointer to input string
 * @needle: pointer to input string.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *p != '\0' && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
