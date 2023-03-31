#include "main.h"

/**
 * _strncpy - first copies at most n characters from src to dest.
 *  If src has fewer than n characters, the remaining characters
 *  in dest are set to null characters ('\0') to pad the string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of characters to
 *  be copied from the source string
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
