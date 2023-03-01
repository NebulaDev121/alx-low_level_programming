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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = s[i] - 'a';
			j = (j + 13) % 26;
			encoded[i] = 'a' + j;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			j = s[i] - 'A';
			j = (j + 13) % 26;
			encoded[i] = 'A' + j;
		}
	}

	return (encoded);
}
