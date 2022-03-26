#include "main.h"
/**
 * choose_func - This functions select a function
 * according a format.
 * @format: the format to be print.
 * Return: Funtion according to format or NULL.
 */
printer_t choose_func(char format)
{
	int i, funcs = 16;

	printer_t functions[] = {
		{'c', _printf_char},
		{'s', _printf_string},
		{'i', _printf_int},
		{'d', _printf_int},
		{'b', _printf_binary},
		{'u', _printf_unsigned_int},
		{'o', _printf_octal},
		{'x', _printf_mini_hexa},
		{'X', _printf_hexa},
		{'S', _printf_string}
		/**
		 * {'d', _printf_double},
		 * {'R', _printf_rot13},
		 * {'S', _printf_string},
		 * {'p', _printf_mini_hexa},
		 * {'r', _printf_reverse},
		 * {'l', _printf_unsigned_int},
		 * {'h', _printf_unsigned_int},
		 * {'*', _printf_special}
		 */
	};

	for (i = 0; i < funcs; i++)
	{
		if (functions[i].format == format)
		{
			return (functions[i]);
		}
	}
	return (functions[i - 1]);
}
