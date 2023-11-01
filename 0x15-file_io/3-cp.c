#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - error exit
 *
 * @code: code of exit
 * @message: message to write
 *
 */
void error_exit(int code, const char *message, const char *f_name)
{
	dprintf(2, "%s %s\n", message, f_name);
	exit(code);
}

/**
 * copy_file - copy file
 *
 * @source_filename: source filename
 * @dest_filename: dest filename
 */
void copy_file(const char *source_filename, const char *dest_filename)
{
	int source_fd, dest_fd;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	source_fd = open(source_filename, O_RDONLY);
	if (source_fd == -1)
		error_exit(98, "Error: Can't read from file", source_filename);

	dest_fd = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		error_exit(99, "Error: Can't write to file", dest_filename);

	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file", dest_filename);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file", source_filename);

	if (close(source_fd) == -1 || close(dest_fd) == -1)
		error_exit(100, "Error: Can't close fd", "0");

	if (close(dest_fd) == -1)
		error_exit(100, "Error: Can't close fd", "1");
}

/**
 * main - main function
 *
 * @argc: number of arg
 * @argv: arg list
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *f_from = argv[1];
	char *f_to = argv[2];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(f_from, f_to);

	return (0);
}
