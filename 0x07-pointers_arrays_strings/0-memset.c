#include <stdio.h>
#include <string.h>

/**
 * _memset - operation to fill mem with char
 * @s: pointer to string array
 * @b: char
 * @n: int
 * Return: always encoded String
 *
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		if (i == 0)
		{
			*s = b;
		}
		else
		{
			*(s + i) = b;
		}
	}

	return (s);
}
