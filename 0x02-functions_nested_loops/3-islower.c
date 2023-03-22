#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: returns 1 if a character is a lowercase and
 * returns 0 if not lowercase.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
