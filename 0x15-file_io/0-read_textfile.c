#include "main.h"

/**
 * read_textfile - copy & paste
 *
 * @filename: ....
 * @letters: .....
 *
 * Return: ..
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_rd, n_wr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);

	n_rd = read(fd, buffer, letters);
	if (n_rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[n_rd] = '\0';

	n_wr = write(STDOUT_FILENO, buffer, n_rd);
	if (n_wr == -1 || n_wr != n_rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (n_wr);
}
