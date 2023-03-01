#include <stdio.h>

/**
 * print_buffer - Prints the content of size bytes of the buffer pointed by b
 *
 * @b: pointer to buffer
 * @size: number of bytes to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
			} else
			{
				printf("  ");
			}

			if (j % 2)
			{
				printf(" ");
			}
		}

		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
			{
				printf(" ");
			}
			else if (b[j] >= ' ' && b[j] <= '~')
			{
				printf("%c", b[j]);
			}
			else
			{
				printf(".");
			}
		}

		printf("\n");
	}

	if (size <= 0)
	{
		printf("\n");
	}
}
