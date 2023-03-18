#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 9 && j == 9)
			{
				continue;

			}
			else
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');

	return (0);
}
