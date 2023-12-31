#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set approximately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
