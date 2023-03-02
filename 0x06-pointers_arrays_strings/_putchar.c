#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<< HEAD
        return (write(1, &c, 1));
=======
	return (write(1, &c, 1));
>>>>>>> 68f320f5cc5623820e6d1db9efb76b68b1c0bdd3
}
