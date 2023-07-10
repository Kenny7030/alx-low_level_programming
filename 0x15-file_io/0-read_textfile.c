#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Func reads a text file and prints it to POSIX stdout.
 * @filename: Ptr to the name of the file.
 * @letters: No of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	if (r == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	buf[r] = '\0'; // Null-terminate the buffer

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		close(fd);
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}

