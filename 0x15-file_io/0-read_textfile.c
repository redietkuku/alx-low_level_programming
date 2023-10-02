#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - it reads file and prints it to the POSIX standard output
 * @filename: is a pointer to the name of the file
 * @letters: number of letters to be read and print
 *
 * Return: actual number of letters if success or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn_it, rd_it, wr_it;
	char *the_buffer;

	if (filename == NULL)
	{
		return (0);
	}

	the_buffer = malloc(sizeof(char) * letters);
	if (the_buffer == NULL)
	{
		return (0);
	}

	opn_it = open(filename, O_RDONLY);
	rd_it = read(opn_it, the_buffer, letters);
	wr_it = write(STDOUT_FILENO, the_buffer, rd_it);

	if (opn_it == -1 || rd_it == -1 || wr_it == -1 || wr_it != rd_it)
	{
		free(the_buffer);
		return (0);
	}

	free(the_buffer);
	close(opn_it);

	return (wr_it);
}
