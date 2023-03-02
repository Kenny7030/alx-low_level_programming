#include "main.h"

/**
<<<<<<< HEAD
 * strcat - concatenates two strings.
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
=======
 * strcat - concatenates the string pointed to by @src, including the terminat
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] - src[index];

>>>>>>> 68f320f5cc5623820e6d1db9efb76b68b1c0bdd3
	return (dest);
}
