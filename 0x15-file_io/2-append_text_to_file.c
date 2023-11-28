#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file ptr
 * @text_content: size value
 * Return: 1 on success and -1 on failure, NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, fb = 0;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	i = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (i < 0)
	{
		return (-1);
	}
	while (text_content[fb])
	{
		fb++;
	}
	j = write(i, text_content, fb);
	if (j < 0)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
