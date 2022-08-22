#include "main.h"

/**
 * read_textfile - reads the text file and prints it to the POSIX stdout
 * @filename: a pointer to the file
 * @letters: number of letters it should read and print
 * Return: number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, f_reader, f_writer;
	void *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0400);
	if (fd < 1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	f_reader = read(fd, buf, letters);
	if (f_reader > 0)
	{
		f_writer = write(STDOUT_FILENO, buf, f_reader);
		if (!f_writer)
			return (0);
	}
	else
		return (0);
	free(buf);
	close(fd);
	return (f_writer);
}
