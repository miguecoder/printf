#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: pointer to argument giver to printf
 * Return: len of data give to printf
 */
int _printf(const char *format, ...)/*"Hello: %i, %c, %s", 45, H, world*/
{
	va_list argument;
	int i, j, len = 0, kby = 1024;
	char *f_name, buffer[kby], ch;
	char* (*f)(va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(argument, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			/*char* (*choose_func(char *))(va_list)*/
			f = choose_func((char *)format + i + 1);

			if (f == NULL)
			{
				return (-1);
			}

			f_name = f(argument);
			for (j = 0; f_name[j]; j++)
			{
				buffer[len] = f_name[j];
				len++;
			}
			if (len == 0)
			{
				len = 1;
			}
			i++;
		}
		else
		{
			buffer[len] = format[i];
			ch = buffer[len];
			if (ch == '%')
			{
				format++;
			}
			len++;
		}
	}
	va_end(argument);
	write(1, &buffer, len);
	return (len);
}
