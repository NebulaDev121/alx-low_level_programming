#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10


/**
 * main - Entry point of the program
 *
 * Description: Generates a random password of
 * length PASSWORD_LENGTH and prints it to stdout.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[7];
	int i, ascii_value;

	srand(time(NULL));

	for (i = 0; i < 5; i++)
	{
		ascii_value = rand() % 62;

		if (ascii_value < 26)
		{
			password[i] = 'a' + ascii_value;
		}
		else if (ascii_value < 52)
		{
			password[i] = 'A' + (ascii_value - 26);
		}
		else
		{
			password[i] = '0' + (ascii_value - 52);
		}
	}

	password[5] = rand() % 10 + '0';
	password[6] = '\0';

	printf("%s", password);

	return (0);
}
