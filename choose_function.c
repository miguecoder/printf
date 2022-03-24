#include "main.h"
/**
 * choose_func - This functions select a function
 * according a format.
 * @p: is a pointer for va_list of arguments of
 * function printf
 * Return: Funtion according to format or NULL.
 */
char* (*choose_func(char *p))(va_list)
{
	arg_p funciones[] = {
		{'c', _printf_char},
		{'s', _printf_string},
		{'d', _printf_int},
		{'i', _printf_int},
		{'\0', NULL}
	};
	int i = 0;

	while (funciones[i].c)
	{
		if (funciones[i].c == *p)
		{
			return (funciones[i].func);
		}
		i++;
	}
	return (NULL);
}
