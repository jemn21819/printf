#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/* _putchar */
int _putchar(char c);


/* _printf.c */
int _printf(const char *format, ...);

/**
 * struct convert - define structure specification
 * and fuctions
 * @spec: Format Specification
 * @f: the function associated
 */

struct convert
{
	char *spec;
	int (*f)(va_list);
};
typedef struct convert convert_t;


/*Handles printing a string, char by char*/
int print_chars(va_list);

/* Handles printing an integer number, digit by digit */
int print_integer(va_list);

/* helper */
int print_number(int n);

#endif

