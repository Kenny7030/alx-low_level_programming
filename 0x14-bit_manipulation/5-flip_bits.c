#include "main.h"

/**
 * flip_bits - Return number of bits to be flipped
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: Number of bits to flip to convert the numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}

