#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: pointer to a string to be encoded
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	char *p = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_subs = "4433007711";
	int i;

	while (*p)
	{
		i = 0;
		while (leet_chars[i])
		{
			if (*p == leet_chars[i])
			{
				*p = leet_subs[i];
				break;
			}
			i++;
		}
		p++;
	}
	return (str);
}
