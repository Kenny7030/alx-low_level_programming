#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
        return 0;

    unsigned int decimal = 0, base = 1;
    int len = 0;

    while (b[len] != '\0')
        len++;

    for (int i = len - 1; i >= 0; i--)
    {
        if (b[i] == '1')
            decimal += base;

        base *= 2;

        if (b[i] != '0' && b[i] != '1')
            return 0;
    }

    return decimal;
}
