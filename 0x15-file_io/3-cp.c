#include "main.h"
#include <string.h>
#define BUF_SIZE 1024
/**
 * main - copy & paste
 *
 * @argc: ....
 * @argv: .....
 *
 * Return: ..
 */

int main(int argc, char **argv)
{
	int fd, fd2, x, y;
	ssize_t n_rd, n_wr;
	char buffer[BUF_SIZE];
	char *filename = argv[1], *filename2 = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!filename)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (!filename2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename2);
		exit(98);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	fd2 = open(filename2, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
		exit(99);
	}

	n_rd = read(fd, buffer, BUF_SIZE);
	if (n_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		close(fd);
		exit(98);
	}

	n_wr = write(fd2, buffer, n_rd);
	if (n_wr != n_rd)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd2);
		close(fd2);
		exit(98);
	}

	x = close(fd);
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	y = close(fd2);
	if (y < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
