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
	int fd, fd2, x, y, n_rd;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((n_rd = read(fd, buffer, BUF_SIZE)) > 0)
	{
		if (fd2 < 0 || write(fd2, buffer, n_rd) != n_rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd);
			exit(99);
		}
	}
	if (n_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
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
