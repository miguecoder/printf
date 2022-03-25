#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list, va_start, va_end, va_arg, va_copy*/

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

/*Old functions that can help us*/
int _putchar(char c);

/*Function for select a function acording a format*/
arg_p choose_func(char form);

/*Principal Prootype*/
int _printf(const char *format, ...);

/*New prototypes for printf acording a format*/
int _printf_char(va_list *);
int _printf_string(va_list *);
int _printf_int(va_list *);

#endif /*MAIN_H*/
