#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if buffer is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	r[size_r - 1] = '\0';
	for (i = size_r - 2; i >= 0; i--)
	{
		if (len1 > 0)
			sum += n1[--len1] - '0';
		if (len2 > 0)
			sum += n2[--len2] - '0';

		sum += carry;
		carry = sum / 10;
		r[i] = (sum % 10) + '0';
		sum = 0;

		if (len1 == 0 && len2 == 0 && carry == 0)
			break;
	}

	if (carry != 0 || len1 > 0 || len2 > 0)
		return (0);

	return (&r[i]);
}
