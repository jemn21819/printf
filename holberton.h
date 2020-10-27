#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/* _putchar */
int _putchar(char c);

/* get_func */
int (*get_func(const char *format))(va_list);

/* _printf.c */
int _printf(const char *format, ...);


int print_chars(va_list c);
int print_chars(va_list s);
int print_integer(va_list i);
int print_integer(va_list d);
int print_rev(va_list r);
int print_bin(va_(va_list b);
int print_unsign(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);



/**
 * struct convert - define structure specification
 *
 * @spec: Format Specification
 * @f: the function associated
 */

typedef struct convert
{
	char *spec;
	int (*f)(va_list);
} convert_t;


#endif
