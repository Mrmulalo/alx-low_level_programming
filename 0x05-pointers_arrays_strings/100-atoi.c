#include "main.h"
#include <limits.h>
/**
 * _atoi - converts sting to an integer.
 * @s: intput string.
 * Return: an integer.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int num;

	sign = 1;
	num = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{

			num = num * 10 + (s[i] - '0');
			if (num < INT_MIN)
				return (0);
			if (num > INT_MAX)
				return (0);
		}
		else if (num > 0)
			break;
		i++;
	}
	return (num * sign);
}
