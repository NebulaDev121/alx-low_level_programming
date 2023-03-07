#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - recursive helper function
 * to check if a string is a palindrome
 *
 * @s: the string to check
 * @start: the start index of the substring to check
 * @end: the end index of the substring to check
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (*(s + start) != *(s + end))
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}
