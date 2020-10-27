#include "holberton.h"
/**
* print_rev - prints a string in reverse
* @list: list containin the variadic arguments
* Return: the amount of digits printed
*/

int print_rev(va_list list)
{
	char *str = va_arg(list, char *);
	int i, x = 0;

	if (!str)
		str = ")LLUN(";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		x++;
	}
	return (x);
}
