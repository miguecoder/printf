#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h> /* va_list, va_start, va_end, va_arg, va_copy*/
#include <stdlib.h> /* malloc, free*/
#include <unistd.h> /* Write function*/

/**
 * struct arg - Define structure of data
 * according to give a printf.
 *
 * @c:format of data.
 * @func: pointer to a function.
 */
typedef struct arg
{
	char c;
	int (*func)(va_list *);
} arg_p;

/*Principal Prootype*/
int _printf(const char *format, ...);

/*Old functions that can help us*/
int _strlen(char *s);
int _putchar(char c);

/*Function for select a function acording a format*/
arg_p choose_func(char format);

/*New prototypes for printf acording a format*/
char _printf_char(va_list arg);
char _printf_string(va_list arg);
char _printf_int(va_list arg);

#endif /*MAIN_H*/
