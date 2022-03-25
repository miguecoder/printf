#include "main.h"
/**
 * choose_func - This functions select a function
 * according a format.
 * @format: the format to be print.
 * Return: Funtion according to format or NULL.
 */
arg_p choose_func(char format)
{
	int i, funcs = 16;

	arg_p functions[] = {
		{'c', _printf_char},
		{'s', _printf_string},
		{'i', _printf_int},
		{'u', _printf_unsigned_int},
		{'d', _printf_double},
		{'o', _printf_octal},
		{'x', _printf_mini_hexa},
		{'X', _printf_hexa},
		{'b', _printf_binary},
		{'R', _printf_rot13},
		{'S', _printf_string},
		{'p', _printf_mini_hexa},
		{'r', _printf_reverse},
		{'l', _printf_unsigned_int},
		{'h', _printf_unsigned_int},
		{'*', _printf_special}
	};
	for (i = 0; i < funcs; i++)
	{
		if (functions[i].c == format)
		{
			return (functions[i]);
		}
	}
	return (functions[i - 1]);
}
