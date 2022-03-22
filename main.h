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
choose_func


/*New prototypes for printf acording a format*/
char printf_char(char c);

#endif 
