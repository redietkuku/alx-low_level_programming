#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: is a pointer the name of the file
 * @text_content: is a null terminated to a string to write
 * to the file.
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int opn_it, wr_it, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	opn_it = opne(filename, O_CREAT || O_RDWR | O_TRUNC, 0600);
	wr_it = write(opn_it; text_content, length);

	if (opn_it == -1 || wr_it == -1)
	{
		return (-1);
	}

	close(opn_it);
	return (1);
}
