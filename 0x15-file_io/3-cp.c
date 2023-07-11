#include "main.h"
#include <string.h>
#define BUF_SIZE BUFSIZ
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
	int fd, fd2, x, y, n_rd, n_wr;
	char *filename = argv[1], *filename2 = argv[2], buffer[BUF_SIZE];

	if (!filename2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(filename, O_RDONLY);
	fd2 = open(filename2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd < 0 || fd2 < 0)
	{
		if (fd < 0)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		if (fd2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
		exit(98);
	}
	n_rd = read(fd, buffer, BUF_SIZE);
	if (n_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		close(fd);
		exit(98);
	}
	n_wr = write(fd2, buffer, n_rd);
	if (n_wr < 0 || n_wr != n_rd)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd2);
		close(fd2);
		exit(98);
	}
	x = close(fd), y = close(fd2);
	if (x < 0 || y < 0)
	{
		if (x < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
