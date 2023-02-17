#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(NULL)); /* do not touch this line */
	n = rand() % 201 - 100; /* do not touch this line */
	printf("%d ", n); /* print the number */
	if (n > 0)
	{
		printf("is positive\n"); /* print if n is positive */
	}
	else if (n == 0)
	{
		printf("is zero\n"); /* print if n is zero */
	}
	else
	{
		printf("is negative\n"); /* print if n is negative */
	}
	return (0);
}
