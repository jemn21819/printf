#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: 1 if succesful, Otherwise, -1 is returned and errno is
 * set appropriately.
 */
int _putchar(char c)
{
	char buffer[1024];
	int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	else
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
