#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h> /* va_list, va_start, va_end, va_arg, va_copy*/
#include <stdlib.h> /* malloc, free*/
#include <unistd.h> /* Write function*/

/*Principal Prootype*/
int _printf(const char *format, ...);

/*Old functions that can help us*/
int _strlen(char *s);

/*Function to select a function acording a format*/
char* (*choose_func(char *p))(va_list);

/*New prototypes for printf acording a format*/
char _printf_char(va_list arg);
char _printf_string(va_list arg);
char _printf_int(va_list arg);

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
	char* (*func)();
} arg_p;

#endif /*MAIN_H*/
