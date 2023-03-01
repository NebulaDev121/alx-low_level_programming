#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' ||
			s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' ||
			s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' ||
			s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
			s[i - 1] == '{' || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 'a' - 'A';
		}
	}

	return (s);
}
