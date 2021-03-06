#include "holberton.h"

/**
 * get_func - finds format
 * @format: format
 * Return: NULL or function
 */

int (*get_func(const char *format))(va_list)
{
	unsigned int i = 0;
	convert_t f_list[] = {
		{"c", printAchar},
		{"s", print_chars},
		{"i", print_int},
		{"d", print_int},
		{"%", print_percent},
		{"b", print_bin},
		{"u", print_unsign},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};

	while (f_list[i].spec)
	{
		if (f_list[i].spec[0] == (*format))
			return (f_list[i].f);
		i++;
	}
	return (NULL);
}

