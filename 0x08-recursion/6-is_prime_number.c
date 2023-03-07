#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (check_divisibility(n, 2));
}

/**
 * check_divisibility - checks if an integer is
 * divisible by any number from i to sqrt(n)
 * @n: the integer to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_divisibility(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (check_divisibility(n, i + 1));
}
