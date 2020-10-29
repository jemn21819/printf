#include "holberton.h"

/**
 * _printf - produces output according to a format.
 * @format: contain the specifies
 * Return: the number of characters printed, -1 if error ocurred
 */
int _printf(const char *format, ...)
{
	int i, prt_chars = 0, flag = 0;
	va_list list;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format[i]; i++)
	{
		if (flag)
		{
			f = get_func(&format[i]);
			if (f != NULL)
				prt_chars += f(list);
			else
			{
				prt_chars += _putchar('%');
				prt_chars += _putchar(format[i]);
			}
			flag = 0;
		}
		else if (format[i] == '%')
		{
			flag = 1;
			if (format[i + 1] == '\0')
				return (-1);
		}
		else
			prt_chars += _putchar(format[i]);
	}
	va_end(list);
	return (prt_chars);
}
