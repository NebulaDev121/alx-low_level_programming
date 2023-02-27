#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 *               separated by commas and spaces, followed by a newline.
 *
 * @a: Pointer to the first element of the array.
 * @n: The number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
