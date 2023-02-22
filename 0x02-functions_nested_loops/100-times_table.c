#include "main.h"
#include <stdio.h>


/**
 * print_times_table - prints the n times table starting with 0
 * @n: the n times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else if (i * j < 10)
				printf(",   %d", i * j);
			else if (i * j < 100)
				printf(",  %d", i * j);
			else
				printf(", %d", i * j);
		}
		printf("\n");
	}
}
