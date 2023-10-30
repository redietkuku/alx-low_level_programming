#include "main.h"
/**
 * _strlen - function that finds the lenght of a string
 * @string: string pointer
 *
 * Return: lenght of a string
 */
size_t _strlen(char *string)
{
	size_t x;

	for (x = 0; string[x]; x++)
	{
		;
	}

	return (x);
}

/**
 * append_text_to_file - is a func that appends text to file
 * @filename: filename pointer
 * @text_content: NULL terminated string
 *
 * Return: 1 if success nad -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t length;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = write(f, text_content, _strlen(text_content));
	}

	close(f);

	if (length == -1)
	{
		return (-1);
	}

	return (1);
}
