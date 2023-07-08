#include "main.h"

/**
 * clear_bit - Clears the bit at the index
 * @n: The number to the index
 * @index: The bit to clear
 *
 * Return: 1 if successful, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1L << index);
	return (1);
}

