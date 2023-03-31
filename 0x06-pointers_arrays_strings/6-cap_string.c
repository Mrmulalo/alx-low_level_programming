#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to the string to be capitalized.
 * Return: pointer to the capatalized string.
 */

char *cap_string(char *str)
{
	char *p;
	int capitalize_next;

	p = str;
	capitalize_next = 1;
	while (*p)
	{
		if (capitalize_next && (*p >= 'a' && *p <= 'z'))
			*p -= 32;

		if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' ||
				*p == ';' || *p == '.' || *p == '!' || *p == '?' ||
				*p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
			capitalize_next = 1;
		else
		{
			capitalize_next = 0;
		}
		p++;
	}
	return (str);
}
