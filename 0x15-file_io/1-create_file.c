#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file
* @text_content: string to write to the file
* Return: 1 on success otherwise -1
* -1 if filename is null
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int len = 0;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			len++;
		bytesWritten = write(fd, text_content, len);
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}
