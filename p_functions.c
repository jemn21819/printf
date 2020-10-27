#include "holberton.h"

/**
 * print_chars - Handles printing a string, char by char
 * @list: argument list with the next arg to handle
 *
 * Return: the amount of characters printed, -1 if error
 */
int print_chars(va_list list)
{
	char *str = va_arg(list, char *);
	int sum = 0;

	if (str == NULL)
		return (-1);
	while (str)
	{
		_putchar(*str);
		str++;
		sum++;
	}
	return (sum);
}

/**
 * print_integer - Handles printing an integer number, digit by digit
 * @list: argument list with the next arg to handle
 *
 * Return: the amount of characters printed, -1 if error
 */
int print_integer(va_list list)
{
	return (print_number(va_arg(list, int)));
}
/**
 *print_number - print and integer character by character
 *@n: integer to print
 *
 *Return: amount of characters printed
 */
int print_number(int n)
{
	unsigned int u_n;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		u_n = -n;
	}
	else
		u_n = n;

	if (u_n / 10 != 0)
		count += print_number(u_n / 10);
	_putchar(u_n % 10 + '0');
	count++;

	return (count);
}

