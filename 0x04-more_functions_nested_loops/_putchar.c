#include "main.h"
#include <unistd.h>
/**
 * _putchar - rites the character n to stdout
 * @n: character to print
 *
 * Return: if successful 1
 * if error, return 1 and set error number appropriately
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
