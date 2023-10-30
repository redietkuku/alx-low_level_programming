#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_97 - function that checks for the correct number of arguments
 * @argc: is the number of arguments
 *
 * Return: Always 0.
 */
void check_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_98 - a function that checks if file_from exists and can be read
 * @check_it: it checks if it's true of false
 * @file: the file_from name
 * @fd_from: the file descriptor of file_from, or -1
 * @fd_to: the file descriptor of file_to, or -1
 *
 * Return: Always 0.
 */
void check_98(ssize_t check_it, char *file, int fd_from, int fd_to)
{
	if (check_it == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_99 - func that checks if file_to was created and/or can be written to
 * @check_it: it checks if it's true of false
 * @file: the file_to name
 * @fd_from: the file descriptor of file_from, or -1
 * @fd_to: the file descriptor of file_to, or -1
 *
 * Return: Always 0.
 */
void check_99(ssize_t check_it, char *file, int fd_from, int fd_to)
{
	if (check_it == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_100 - func that checks if file descriptors were closed properly
 * @check_it: it checks if it's true or false
 * @fd: the file descriptor
 *
 * Return: Always 0.
 */
void check_100(int check_it, int fd)
{
	if (check_it == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check_97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_99((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check_98(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check_99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check_100(close_to, fd_to);
	check_100(close_from, fd_from);
	return (0);
}
