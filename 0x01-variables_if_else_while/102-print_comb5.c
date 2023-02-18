#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int x, y;

	for (x = 0 ; x < 100 ; x++)
	{
		for (y = x + 1 ; y < 100 ; y++)
		{
			printf("%02d %02d", x, y);
			if (y != 99 || x != 98)
			{
				printf(", ");
			}
		}
	}
	putchar('\n');
	return (0);
}
