#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: string to add at the end of the file
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int len = 0;
	ssize_t bytesWritten;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		len++;

	bytesWritten = write(fd, text_content, len);
	close(fd);

	if (bytesWritten == -1)
		return (-1);

	return (1);
}
