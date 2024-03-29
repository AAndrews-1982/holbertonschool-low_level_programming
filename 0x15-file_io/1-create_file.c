#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file and writes text content to it
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_written = write(file_desc, text_content, len);
		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);

	return (1);
}

