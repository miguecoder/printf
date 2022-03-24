#include "mainn.h"

/**
 * print_int - Print format
* @list: va_arg
* Return: String to print
*/
char *print_int(va_list list)
{
	char *save;
	int a;
	int i = 0, j = 0;
	char buffer[10];
	unsigned int buf;

	if (!list)
		return (NULL);
	a = va_arg(list, int);
	if (a == 0)
	{
		j = 1;
		save = malloc(sizeof(char) * 2);
		save[0] = '0';
	}
	else
	{
		if (a < 0)
			buf = -a;
		else
			buf = a;

		while (buf)
		{
			buffer[i++] = (buf % 10) + '0';
			buf = buf / 10;
		}
		if (n < 0)
			buffer[i++] = '-';
		save = malloc(sizeof(char) * i);

		i--;
		while (i >= 0)
		save[j++] = buffer[i--];
	}
	save[j] = '\0';
	return (save);
}

