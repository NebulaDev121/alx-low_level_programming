#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of array to create
 * @c: character to initialize array with
 * Return: pointer to array or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
