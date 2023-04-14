/*
 * File: 0-read_textfile.c
 * Auth: Kenny7030.
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char buf[letters];
    ssize_t t, w;
    int fd;
    
    fd = open(filename, O_RDONLY);
    if (fd == -1)
	 return 0;
    
    t = read(fd, buf, letters);
    if (t == -1)
    {
	close(fd);
	return 0;
    }
    
    w = write(STDOUT_FILENO, buf, t);
    if (w == -1)
    {
	close(fd);
	return 0;
    }
    
    close(fd);
    return w;
}

