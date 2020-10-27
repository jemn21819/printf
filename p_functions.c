#include "holberton.h"

/**
 * printAchar - Handles printing a single char passed as va_list
 * @list: contains the argument to retrieve and print
 * Return: amount of chars printed, -1 if error
 */
int printAchar(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * print_chars - Handles printing a string passed as va_list
 * @list: contains the argument to retrieve and print
 * Return: amount of chars printed
 */
int print_chars(va_list list)
{
	char *str = va_arg(list, char *);
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_int - Handles printing an integer number passed as va_list
 * @list: contains the argument to retrieve and print
 * Return: amount of digits printed
 */
int print_int(va_list list)
{
	int n = va_arg(list, int);
	int digits = 0;

	print_int_help(n);

	if (n < 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}

	return (digits);
}
/**
 * print_int_help - takes an int number, prints it using recursion
 * @n: integer number to print
 */
void print_int_help(int n)
{
	unsigned int u_n;

	if (n < 0)
	{
		_putchar('-');
		u_n = -n;
	}
	else
		u_n = n;

	if (u_n / 10 != 0)
		print_int_help(u_n / 10);
	_putchar(u_n % 10 + '0');
}
/**
 * print_percent - prints '%' when especially requested
 * @list: argument list {wont be used}
 * Return: always 1
 */
int print_percent(va_list __attribute__((unused)) list)
{
	return (_putchar('%'));
}
