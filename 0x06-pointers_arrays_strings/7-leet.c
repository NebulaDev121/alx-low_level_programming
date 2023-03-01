#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: a pointer to the modified string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aeotl";
	char leet[] = "43071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
			{
				s[i] = leet[j];
				break;
			}
		}
	}

	return (s);
}
