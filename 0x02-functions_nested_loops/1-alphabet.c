#include <stdio.h>
/**
 * print_alphabet - prints the lowercase alphabet followed by a newline
 * Return: void
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
		putchar(ch);
	putchar('\n');
}