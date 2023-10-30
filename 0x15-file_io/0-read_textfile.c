#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the parameter pointer
 * @letters: the parameter
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rfile;
	ssize_t nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	rfile = open(filename, O_RDONLY);

	if (rfile == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nread = read(rfile, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(rfile);
	free(buffer);

	return (nwrite);
}
