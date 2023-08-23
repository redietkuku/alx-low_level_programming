#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character to be printed
 *
 * Return: 1 if success and -1 if fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
