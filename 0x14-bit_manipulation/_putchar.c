#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character
 *
 * Return: 1 if successfull and 0 if fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
