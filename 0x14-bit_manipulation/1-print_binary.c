#include "main.h"

/**
 * print_binary - Prints a number as a binary string
 * @n: The number to print
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int printed = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = bit - 1; i >= 0; i--)
	{
		if (n & (1L << i))
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}
}

