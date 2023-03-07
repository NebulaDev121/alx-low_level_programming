#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * check_palindrome - recursively check if a
 * string is a palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] == s[end])
		return (check_palindrome(s, start + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_palindrome(s, 0, len - 1));
}
