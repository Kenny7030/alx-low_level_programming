#include "main.h"

/**
 * get_endianness - Returns the endianness of the system
 *
 * Return: 0 if the endian is big, 1 if it's small
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (*ptr);
}

