#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words of.
 *
 * Return: The number of words in the string.
 */
static int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			++count;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str is NULL, empty, or memory allocation fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 * Each element of this array should contain a single word,
 * null-terminated. The last element of the returned array
 * should be NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count = 0, word_len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; ++i)
	{
		while (str[k] == ' ')
			++k;

		for (len = 0; str[k + len] != ' ' && str[k + len] != '\0'; ++len);

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; ++j)
				free(words[j]);

			free(words);

			return (NULL);
		}

		for (j = 0; j < len; ++j)
			words[i][j] = str[k + j];

		words[i][j] = '\0';
		k += len;
	}

	words[i] = NULL;

	return (words);
}
