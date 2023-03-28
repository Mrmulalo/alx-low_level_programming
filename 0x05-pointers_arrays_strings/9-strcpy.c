#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: input string.
 * @src: intput string.
 * Return: copied string.
 */
char *_strcpy(char *dest, char *src)
{
	char *start_dest;

	start_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start_dest);
}
