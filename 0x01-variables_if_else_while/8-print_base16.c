#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
*/
int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
