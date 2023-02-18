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
			printf("%02d %02d, ", x, y);
		}
	}
	putchar('\n');
	return (0);
}
