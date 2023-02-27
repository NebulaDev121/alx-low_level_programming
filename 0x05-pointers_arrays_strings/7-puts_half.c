#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start = length / 2;
	int i;

	if (length % 2 != 0)
	{
		start += 1;
	}

	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
