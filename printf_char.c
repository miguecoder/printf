#include "main.h"

/**
 *print_char - print formated of char
 *@list: va_list of arguments
 *Return: print chain
 *
 */

char *_printf_char(va_list arg)
{
	char *chartoprint;
	char chr;

	if (arg == NULL)
		return (0);

	chr = va_arg(arg, int);
	chartoprint = malloc(sizeof(char) * 2);

	if (chartoprint == NULL)
	{
		free(chartoprint);
		return (NULL);
	}
	if (chr)
	{
		chartoprint[0] = chr;
	}
	else
	{
		chartoprint[0] = '\0';
	}
	chartoprint[1] = '\0';
	return (chartoprint);
}
