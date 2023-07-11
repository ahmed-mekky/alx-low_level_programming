#include "main.h"
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - copy & paste
 *
 * @filename: ....
 * @text_content: .....
 *
 * Return: ..
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_wr, to_wr;

	if (!filename)
		return (0);

	fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (0);

	to_wr = strlen(text_content) + 1;
	n_wr = write(fd, text_content, to_wr);
	if (n_wr == -1 || n_wr != to_wr)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (n_wr);
}
