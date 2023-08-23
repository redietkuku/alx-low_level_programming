#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character
 *
 * Return: 1 on success and 0 when it fails
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
