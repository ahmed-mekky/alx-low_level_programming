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
	char *filename = argv[1], *filename2 = argv[2], buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	fd2 = open(filename2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((n_rd = read(fd, buffer, BUF_SIZE)) > 0)
	{
		if (fd2 < 0 || write(fd2, buffer, BUF_SIZE) != n_rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			close(fd2);
			exit(98);
		}
	}
	if (n_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd);
		close(fd);
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
