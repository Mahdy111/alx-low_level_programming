#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: ptr to file
 * @text_content: another ptr
 * Return: 1 if success. -1 if it's NULL
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, fb = 0;

	if (!filename)
	{
		return (-1);
	}
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fb == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[fb] != '\0')
		{
			fb++;
		}
		j = write(i, text_content, fb);
	}
	if (j == -1 || j != fb)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
