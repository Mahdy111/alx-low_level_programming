#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: ptr to file
 * @text_content: another ptr
 * Return: 1 if success. -1 if it's NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fb;
	int let;
	int per;

	if (!filename)
		return (-1);

	fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fb == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)
		;

	per = write(fb, text_content, let);

	if (per == -1)
		return (-1);

	close(fb);

	return (1);
}
