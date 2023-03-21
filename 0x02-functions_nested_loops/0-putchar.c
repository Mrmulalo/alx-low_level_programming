#include "main.h"

/**
 * main - Entry point
 * Return: Always return 0 (Success)
*/
int main(void)
{
	int i;
	char mystring[] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(mystring[i]);
	_putchar('\n');

	return (0);
}
