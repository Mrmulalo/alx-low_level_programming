#include "main.h"

/**
 * _strcmp - checks if two strings are the same
 * @s1: pointer to string to be compared
 * @s2: pointer to string to be compared
 * Return: 0 if the strings are the same
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
