#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: The difference between the ASCII values of the first differing
 * pair of characters in the two strings. If the strings are equal, 0 is
 * returned.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);

		i++;
	}

	return (s1[i] - s2[i]);
}
