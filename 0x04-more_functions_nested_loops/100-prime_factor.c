#include <stdio.h>
#include "main.h"
/**
 * isPrime - analise if a number is prime or not
 * @n: number to check
 * Return: true if it is prime false if not
 */
int isPrime(long int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
	return (1);
	}
}
