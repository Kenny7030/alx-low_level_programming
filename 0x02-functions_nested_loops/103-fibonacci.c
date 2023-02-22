#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (1)
	while (k + j < 4000000)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;
		k += j;

		if (k % 2 == 0)
			sum += k;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;
		j = k - j;

		fib1 = fib2;
		fib2 = fibsum;
		++i;
	}
	printf("%.0f\n", tot_sum);

	printf("%ld\n", sum);
	return (0);
}
