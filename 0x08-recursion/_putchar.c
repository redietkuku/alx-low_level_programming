#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character
 *
 * Return: 1 if success and -1 if fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
