#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in str.
 */
static int count_words(char *str)
{
	int word_count = 0;
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			++word_count;
		}
	}

	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 *         Each element of this array contains a single word, null-terminated.
 *         The last element of the array is NULL.
 *         If str == NULL or str == "", returns NULL.
 */
char **strtow(char *str)
{
	char **words;
	int word_count;
	int word_start = -1;
	int i, j, k;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	word_count = count_words(str);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; j <= word_count; ++j)
	{
		for (k = i; str[k] != '\0' && (k == i || str[k - 1] == ' '); ++k)
		{
			if (word_start == -1)
			{
				word_start = k;
			}
		}

		if (word_start != -1)
		{
			words[j] = malloc((k - word_start + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (--j; j >= 0; --j)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}

			for (k = word_start; str[k] != '\0' && str[k] != ' '; ++k)
			{
				words[j][k - word_start] = str[k];
			}
			words[j][k - word_start] = '\0';
			word_start = -1;
			i = k;
		}
	}

	return (words);
}
