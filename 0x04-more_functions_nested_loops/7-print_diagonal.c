#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of times the character "\" should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
