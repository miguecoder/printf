#include "main.h"

/**
 *print_char - print formated of char
 *@list: va_list of arguments
 *Return: print chain
 *
 */

char *print_char(va_list list)
{
	char *save;
	char chrs;

	if(!list)
		return (0);

	chrs = va_arg(list; int);
	save = malloc(sizeof(char) * 2);
	if (!save)
	{
		free(save);
		return (NULL);
	}
	if (chrs)
	{
		save[0] = chrs;
	}
	else
	{
		save[0] = '\0';
	}
	save[1] = '\0';
return (save);
}
