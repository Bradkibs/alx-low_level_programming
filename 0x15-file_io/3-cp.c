#include "main.h"

/**
 * main - copies the files from source to destination
 * @argc: number of args passed on
 * @argv: the argument lists passed on
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int fd, f_writer, f_reader, to_fd, close_fd, close_to_fd;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY, 0600);
	if (fd == -1)
		exit(99);
	f_reader = read(fd, buf, 1024);
	if (f_reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
		exit(99);
	f_writer = write(to_fd, buf, f_reader);
	if (f_writer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_fd = close(fd);
	close_to_fd = close(to_fd);
	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	if (close_to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to_fd);
		exit(100);
	}
	return (0);
}
