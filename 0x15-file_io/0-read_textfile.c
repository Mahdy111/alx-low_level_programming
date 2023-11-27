#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the file
 * @letters: letters printed
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	fb = open(filename, O_RDONLY);

	if (fb == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(fb, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fb);

	free(buff);

	return (nwr);
}
