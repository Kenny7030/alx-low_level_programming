#include "main.h"

/**
 * binary_to_uint - Converts a binary number string to an unsigned int
 * @b: The binary number as a string
 *
 * Return: The unsigned int of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num << 1) | (*b - '0');
	}
	return (num);
}

