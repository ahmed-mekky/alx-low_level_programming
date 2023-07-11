#include "main.h"
#include <string.h>
#include <sys/stat.h>
/**
 * append_text_to_file - copy & paste
 *
 * @filename: ....
 * @text_content: .....
 *
 * Return: ..
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_wr, to_wr;

	if (!filename || (!text_content && !filename))
		return (-1);
	if (filename && !text_content)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	to_wr = strlen(text_content);
	n_wr = write(fd, text_content, to_wr);
	if (n_wr == -1 || n_wr != to_wr)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
