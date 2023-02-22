#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers without using long long, malloc,
 * pointers, array/tables, or structures
 * Return: 0
 * main - prints sum of even-valued fibonacci numbers under 4,000,000
 * Return: 0 if succesfull
 */

int main(void)
{
	int counter, overflow;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;
	long int i, a, b, sum;

	printf("1");
	a = 1;
	b = 2;

	for (counter = 2; counter < 93; counter++) /* will still print */
	for (i = 0, sum = 0; a < 4000000; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
		if (!(a % 2))
			sum += a;
		b = a + b;
		a = b - a;
	}

	a_head = a / 1000000000; /* break larger num into 2 parts */
	a_tail = a % 1000000000;
	b_head = b / 1000000000;
	b_tail = b % 1000000000;

	for (; counter < 99; counter++)
	{
		overflow = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * overflow);
		sum_head = (a_head + b_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;
	}


	printf("\n");

	printf("%ld\n", sum);
	return (0);
}

