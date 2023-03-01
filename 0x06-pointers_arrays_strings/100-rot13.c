#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string to be encoded
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char *encoded = s;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 13 && s[i]; j++)
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				encoded[i] = s[i] + 13;
			}
			else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				encoded[i] = s[i] - 13;
			}
			else
			{
				encoded[i] = s[i];
			}
			i++;
		}
		i--;
	}

	return (encoded);
}
