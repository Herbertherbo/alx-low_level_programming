#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - creates a file.
 * @filename: The name of the file to create
 * @text_content: pointer to a string to write to the file.
 *Return: 1 on success, -1 on failure.
 */


int create_file(const char *filename, char *text_content)
{

	int fp, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{

		for (len = 0; text_content[len];)
			len++;

	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, len);


	if (fp == -1 || w == -1)
		return (-1);

	close(fp);
	return (1);

}

