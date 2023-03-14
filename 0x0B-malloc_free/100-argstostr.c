#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total_len += len + 1;
	}

	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[j++] = av[i][len++];
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
