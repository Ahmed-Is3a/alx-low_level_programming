#include "main.h"
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * steps:
 * open the file
 * read from file
 * write to stdout
 * close the file
 *
 * @filename: file name
 * @letters: number of letters
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char *buff;
	ssize_t bytes_read;
	ssize_t bytes_write;

	fd = fopen(filename, "r");

	if (filename == NULL)
		return (0);

	if (fd == NULL) /* if the file cannot be opened */
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL) /* if memory allocation failes */
		return (-1);

	bytes_read = fread(buff, sizeof(char), letters, fd);
	if (bytes_read == 0) /* if reading fails */
	{
		fclose(fd);
		free(buff);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buff, letters);
	if (bytes_write != bytes_read) /* if write fails */
	{
		fclose(fd);
		free(buff);
		return (0);
	}

	fclose(fd);
	free(buff);
	return (bytes_write);
}
