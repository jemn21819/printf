#include "holberton.h"

/**
 * print_bin - convert to binary
 * @b: number in decimal
 * Return: number of chars printed
 */

int print_bin(va_list b)
{
	unsigned int i, n, num, len, pow, digit;
	int count = 0;

	n = va_arg(b, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		pow = 1;
		for (x = 1; x <= len - 1; j++)
			pow *= 2;
		for (x = 1; x <= len; x++)
		{
			digit = n / pow;
			_putchar(digit + '0');
			count++;
			n -= digit * pow;
			pow /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
