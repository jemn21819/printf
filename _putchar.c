#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: 1 if succesful, Otherwise, -1 is returned and errno is
 * set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
