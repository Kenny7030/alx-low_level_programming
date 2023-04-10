#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The bits
 * @index: index to check bit and get value
 *
 * Return: -1 if error, Else value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
