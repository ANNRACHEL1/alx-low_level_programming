#include "main.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints the letters
 * @filename: filename.
 * @letters: number of letters printed
 * return: number of letters printed || 0
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd;

	ssize_t _read, _write;

	char *buffer;

	if (!filename)
	{
		return (0);
	}
	/*open file*/
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	/*buffer*/
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	/* read*/
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
	free(buffer);
	close(fd);
	return (nwr);
	}
	/*write*/
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (_read);

}
