#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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

/* get_func */
int (*get_func(const char *format))(va_list);
/*printing character by charcater*/
int _putchar(char c);

/* _printf.c */
int _printf(const char *format, ...);
/* one char but arg is va_list*/
int printAchar(va_list);
/*Handles printing a string, char by char*/
int print_chars(va_list);

/* Handles printing an integer number, digit by digit */
int print_int(va_list);

/* helper */
void print_int_help(int n);

#endif
