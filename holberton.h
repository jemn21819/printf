#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* _putchar */
int _putchar(char c);

/* get_func */
int (*get_func(const char *format))(va_list);

/* _printf.c */
int _printf(const char *format, ...);


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
/* one char but arg is va_list*/
int printAchar(va_list);
/*Handles printing a string, char by char*/
int print_chars(va_list);
/* Handles printing an integer number, digit by digit */
int print_int(va_list);
/* recursively print an integer*/
void print_int_help(int n);
/* handles the '%' sign*/
int print_percent(va_list list);
/* prints a string in reverse */
int print_rev(va_list r);
/*takes an unsigned int from va_arg and prints a binary*/
int print_bin(va_list b);
int print_unsign(va_list u);
int print_octal(va_list o);
/*print va_arg argument as lowercase hexadecimal*/
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
#endif
