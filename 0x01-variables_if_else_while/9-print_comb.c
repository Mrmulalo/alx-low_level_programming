#include <stdio.h>

/**
 * main - entry point
 * Return: Always return 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i == 9 && j == 9)
				continue;
			else
				putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
