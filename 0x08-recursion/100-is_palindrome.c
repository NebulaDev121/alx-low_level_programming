#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		return (0);
	}

	return (1);
}
