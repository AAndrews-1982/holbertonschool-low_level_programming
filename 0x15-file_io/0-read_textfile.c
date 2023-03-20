#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters it could read and print, 0 if failed to open.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}

	bytes_read = read(file_desc, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}

	close(file_desc);
	free(buffer);

	return (bytes_written);
}

