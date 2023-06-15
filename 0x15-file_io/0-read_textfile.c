#include "main.h"

/**
* read_textfile - reads a text file
* and prints it to the POSIX standard output
* @filename: name of the file
* @letters: number of letters read and printed
* Return: actual number of letters read and printed else 0
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
