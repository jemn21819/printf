#include "holberton.h"

/**
 * print_rot13 - prints unsigned int argument as binary
 * @list: list containin the variadic arguments
 * Return: the amount of digits printed
 */

int print_rot13(va_list list)
{
	int x, i;
	char *str = va_arg(list, char *);
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x]; x++)
	{
		if (str[x] < 'A' || (str[x] > 'Z' && str[x] < 'a') || str[x] > 'z')
			_putchar(str[x]);
		else
		{
			for (i = 0; i <= 52; i++)
				if (str[x] == input[i])
					_putchar(output[i]);
		}
	}
	return (x);
}
