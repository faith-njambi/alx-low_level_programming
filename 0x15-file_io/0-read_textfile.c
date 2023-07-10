#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - reads a file and prints it to standard output
* @filename: name of te file
* @letters: no of letters it should read and print
* Return: no of letters read and printed
* 0 if file cannot be opened or read, file name is null
* or if write fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesWritten;
	ssize_t bytesRead;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd <= 0)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead <= 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten <= 0 || bytesWritten != bytesRead)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytesRead);
}
