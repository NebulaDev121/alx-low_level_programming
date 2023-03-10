#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of command-line arguments passed to the program
 * @argv: an array of strings containing the actual arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
        printf("%d\n", argc - 1);
        return (0);
}
