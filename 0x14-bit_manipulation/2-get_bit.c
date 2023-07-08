#include "main.h"

/**
 * get_bit - Gets bit at the index
 * @n: The number to the index
 * @index: The bit to get
 *
 * Return: the bit state or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	unsigned long int mask = 1L << index;
	unsigned long int bit = n & mask;
	bit >>= index;

	return (int)bit;
}

