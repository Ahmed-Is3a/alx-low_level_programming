#include "main.h"
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file.
 *
 * @filename: file name
 * @text_content: NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytes_written = write(fd, text_content, text_length);

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
