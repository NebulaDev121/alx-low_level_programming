#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: pointer to a function that takes a char * and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
