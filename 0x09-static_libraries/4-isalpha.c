#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: character
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

