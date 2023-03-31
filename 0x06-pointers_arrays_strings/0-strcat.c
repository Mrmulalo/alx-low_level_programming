#include "main.h"
/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the
 * end of dest, and then adds a terminating null byte
 * @dest: input string
 * @src: input string
 * Return: a pointer to the resting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
