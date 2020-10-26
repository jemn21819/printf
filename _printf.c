#include "holberton.h"

/**
 * _printf - produces output according to a format.
 * @format: contain the specifies
 * Return: the number of characters printed 
 */

int _printf(const char *format, ...)
{
	int i, x, flag = 0;
	char ch;
	

	int prt_chars;
	convert_t f_list[] = {
		{"c", print_chars},
		{"s", print_chars},
		{"%", print_chars},
		{"d", print_integer},
		{"i". print_integer};
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (0);

	va_start(arg_list, format);
	
	for (i = 0; format[i] != '\0'; i++)
	{
		ch =  format[i];
	for (x = 0; f_list[x]->f != NULL; x++)

			{
				if (ch == f_list[x]->spec)
					f_list[x]->f(arg_list);
			}
		if (ch != %)
			_putchar(ch);
		
				

