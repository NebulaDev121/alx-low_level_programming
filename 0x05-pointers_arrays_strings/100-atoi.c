#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			int digit = (*s - '0');

			if (result > INT_MAX / 10 ||
					(result == INT_MAX / 10 && digit > INT_MAX % 10))
				return (sign == 1 ? INT_MAX : INT_MIN);
			result = (result * 10 + digit);
		}
		else if (result > 0)
			break;
		s++;
	}

	return (result * sign);
}
