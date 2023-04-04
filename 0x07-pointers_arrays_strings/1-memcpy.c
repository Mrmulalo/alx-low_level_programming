#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination string.
 * @src: pointer to  the source string.
 * @n: number of bytes.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d_ptr = dest;
	char *s_ptr = src;

	while (n--)
		*d_ptr++ = *s_ptr;
	return (dest);
}
