#include "mainn.h"

/**
 * print_int - Print format
* @list: va_arg
* Return: String to print
*/
char *print_int(va_list args)
{
	char *inttoprint;
	int integer, i = 0, j = 0;
	char buffer[10];
	unsigned int intsig;

	if (!list)
	{
		return (NULL);
	}
	integer = va_arg(args, int);

	if (integer == 0)
	{
		j = 1;
		inttoprint = malloc(sizeof(char) * 2);
		inttoprint[0] = '0';
	}
	else
	{
		if (integer < 0)
		{
			intsig = -integer;
		}
		else
		{
			intsig = integer;
		}

		while (intsig)
		{
			buffer[i++] = (intsig % 10) + '0';
			intsig = intsig / 10;
		}
		if (integer < 0)
		{
			buffer[i++] = '-';
		}
		inttoprint = malloc(sizeof(char) * i);

		i--;
		
		while (i >= 0)
		inttoprint[j++] = buffer[i--];
	}
	inttoprint[j] = '\0';
	return (inttoprint);
}
