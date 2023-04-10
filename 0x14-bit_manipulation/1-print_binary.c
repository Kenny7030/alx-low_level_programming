#include "main.h"

/**
 * print_binary - Prints a binary notation of a number.
 * @n: number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}

int main(void)
{
	unsigned long int number = 42;
	printf("The binary representation of %lu is: ", number);
	print_binary(number);
	printf("\n");
	return 0;
}

