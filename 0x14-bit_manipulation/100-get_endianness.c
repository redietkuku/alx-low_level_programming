#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *character;

	x = 1;
	character = (char *)&x;


	return (*character);
}
