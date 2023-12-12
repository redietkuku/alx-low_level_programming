#include "main.h"

/**
 * _strcat - appends the str stirng to the dest string
 * @dest: char
 * @src: char
 *
 * Return: pointer to dest or a char
 */
char *_strcat(char *dest, char *src)
{
	char *string = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (string);
}
