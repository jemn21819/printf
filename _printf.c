#include "holberton.h"

/**
 * _printf - produces output according to a format.
 * @format: contain the specifies
 * Return: the number of characters printed, -1 if error ocurred
 */

int _printf(const char *format, ...)
{
	printf("punto 1");
	int i, x, flag = 0, prt_chars = 0;
	char *ch = NULL;
	va_list arg_list;
	printf("punto 2");
	convert_t f_list[] = {
		{"c", print_chars},
		{"s", print_chars},
		{"%", print_chars},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	printf("punto 3");

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printf("punto 4");
	for (i = 0; format[i] != '\0'; i++)
	{
		*ch =  format[i];
		if (flag)
		{
			for (x = 0; f_list[x].f != NULL; x++)
			{
				printf("point 5");
				if (ch == f_list[x].spec)
					prt_chars += f_list[x].f(arg_list);
				printf("point 6");
			}
			flag = 0;
		}
		else
			if (*ch == '%')
				flag = 1;
			else
				prt_chars += _putchar(*ch);
	}

	va_end(arg_list);
	return (prt_chars);
}

