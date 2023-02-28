#include <stdio.h>
#include <string.h>

/**
 * main - Checks if the given password is correct
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: 0 if password is correct, 1 otherwise
 */
int main(int argc, char **argv)
{
	char *password = "MyPassword123";
	char *input_password;

	if (argc != 2)
	{
		printf("Usage: %s password\n", argv[0]);
		return (1);
	}

	input_password = argv[1];

	if (strcmp(input_password, password) == 0)
	{
		printf("Tada! Congrats\n");
		return (0);
	}
	else
	{
		printf("Wrong password\n");
		return (1);
	}
}
