#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: 1 on sucess and -1 when it fails
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
