#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file.
 *
 * @argc: number arguments
 * @argv: list of arguments
 *
 * Return: zero
*/
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	FILE *source_file;
	FILE *destination_file;
	char buffer[1024];
	size_t bytes_read, bytes_written;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	source_file = fopen(file_from, "rb");
	if (source_file == NULL)
	{
		dprintf(0, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	destination_file = fopen(file_to, "wb");
	if (destination_file == NULL)
	{
		dprintf(0, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, destination_file);
		if (bytes_written < bytes_read)
		{
			perror("Error writing to destination file");
			fclose(source_file);
			fclose(destination_file);
			return (4);
		}
	}
	fclose(source_file);
	fclose(destination_file);

	return (0);
}
