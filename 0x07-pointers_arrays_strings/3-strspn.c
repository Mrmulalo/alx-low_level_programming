#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to input string.
 * @accept: pointer to input strng.
 * Return: number of bytes in the initial segment s which consists of bytes
 * from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	char *p = s;

	len = 0;
	while (*p != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*p == *q)
			{
				len++;
				break;
			}
			q++;
		}
		if (*q == '\0')
			break;
		p++;
	}
	return (len);
}
