#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file being read
 * @letters: where letters is the number of letters it should read and print
 * Return: the actual number of letters read and printed, 0 if an error occured
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

		char *buff;
		ssize_t fp;
		ssize_t y;
		ssize_t t;

		fp = open(filename, O_RDONLY);
		if (fp == -1)
			return (0);

		buff = malloc(sizeof(char) * letters);
		t = read(fp, buff, letters);
		y = write(STDOUT_FILENO, buff, t);


		free(buff);
			close(fp);
		return (y);

}

