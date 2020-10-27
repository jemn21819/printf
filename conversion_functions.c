#include "holberton.h"

/**
 * print_bin - prints unsigned int argument as binary
 * @list: list containin the variadic arguments
 * Return: the amount of digits printed
 */
int print_bin(va_list list)
{
	unsigned int u_n = va_arg(list, unsigned int);
	int binary[30];
	int i = 0, count = 0;

	for (i = 0; u_n > 0; i++)
	{
		binary[i] = u_n % 2;
		u_n /= 2;
	}
	count = i;

	for (i--; i >= 0; i--)
		_putchar(binary[i] + '0');

	return (count);
}
/**
 * print_unsign - handles printing and unsigned int va_arg
 * @list: contains the argument to print
 * Return: amount of digits printed
 */
int print_unsign(va_list list)
{
	unsigned int u_n = va_arg(list, unsigned int);
	int num[30];
	int i = 0, count = 0;

	for (i = 0; u_n > 0; i++)
	{
		num[i] = u_n % 10;
		u_n /= 10;
	}
	count = i;

	for (i--; i >= 0; i--)
		_putchar(num[i] + '0');

	return (count);
}

/**
 * print_octal - prints an unsigne int va_arg as octal
 * @list: contains the octal argument
 * Return: amount of digits printed
 */

int print_octal(va_list list)
{
	unsigned int u_n = va_arg(list, unsigned int);
	int octal[100];
	int i = 0, count = 0;

	for (i = 0; u_n != 0; i++)
	{
		octal[i] = u_n % 8;
		u_n /= 8;
	}

	count = i;
	for (i--; i >= 0; i--)
		_putchar(octal[i] + '0');

	return (count);
}
