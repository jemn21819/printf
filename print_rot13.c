#include "holberton.h"

/**
 * print_rot13 - prints unsigned int argument as binary
 * @list: list containin the variadic arguments
 * Return: the amount of digits printed
 */

int print_rot13(va_list list)
{
	int x, i, count = 0;
	char *str = va_arg(list, char *);
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(null)";
	for (x = 0; str[x] != '\0'; x++)
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (str[x] == input[i])
			{
				_putchar(output[i]);
				count++;
				break;
			}
		}
	}
	return (count);
}
