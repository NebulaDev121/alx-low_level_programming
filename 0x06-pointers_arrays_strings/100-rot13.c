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
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			s[i] += 13;
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			s[i] -= 13;
	}
	return (s);
}
