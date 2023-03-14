#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 *
 * Return: Pointer to concatenated string or NULL if failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';

	return (result);
}
