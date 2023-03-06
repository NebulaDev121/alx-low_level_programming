#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence
 * in a string of any of a set of bytes
 * @s: string to search
 * @accept: bytes to search for
 *
 * Return: pointer to the byte in s that
 * matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return (NULL);
}
