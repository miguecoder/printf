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
	arg funciones[] = {
		{'c', printf_char},
		{'s', printf_string},
		{'\0', NULL}
	};
	int i = 0;

	while (!funciones[i].c == '\0')
	{
		if (funciones[i] == *p)
		{
			return (funciones[i].func);
		}
		i++;
	}
	return (NULL);
}
