#ifndef HOLBERTON_H
#define HOLBERTON_H

/* _putchar */
int _putchar(char c);


/* _printf.c */
int _printf(const char *format, ...);


typedef struct convert
{
	char *spec;
	int (*f)(va_list);
} convert_t;

/*Handles printing a string, char by char*/
int print_chars(va_list);

/* Handles printing an integer number, digit by digit */
int print_integer(va_list);

#endif

