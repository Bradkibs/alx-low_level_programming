#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file to create
 * @text_content: a null terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, f_writer;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 2)
		return (-1);
	if (text_content == NULL)
	{
		f_writer = write(STDOUT_FILENO, "", 0);
		if (f_writer == -1)
			return (-1);
		return (1);
	}
	while (*text_content)
        {
                len++;
                text_content++;
        }
	f_writer = write (STDOUT_FILENO, text_content, len);
	if (f_writer == -1)
		return (-1);
	close(fd);
	return (1);

}
