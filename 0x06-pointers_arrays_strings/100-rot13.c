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
	char *p = s;

	while (*p != '\0')
	{
		if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
		{
			*p += 13;
		}
		else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
		{
			*p -= 13;
		}
		p++;
	}
	return (s);
}
