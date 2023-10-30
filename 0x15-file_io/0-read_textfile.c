#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * where letters is the number of letters it should read and print
 *
 * @filename: file name
 * @letters: letters
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	int c;
	int num_of_char;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	num_of_char = 0;

	while (letters--)
	{
		c = fgetc(fp);
		num_of_char++;
		if (feof(fp))
			break;
		printf("%c", c);
	}
	printf("\n");
	fclose(fp);
	return (num_of_char);

}
