#include "main.h"

/**
* _place - Replace string
* @dest: destiny
* @source: fountain
* Return: string
*/

char *_place(char *dest, char *source)
{
	int i = 0;

	while (source[i])
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
* print_string - Print the string
* @list: va_list
* Return: return pointer
*/

char *print_string(va_list list)
{
	char *string;
	char *result;
	int s;

	if (!list)
		return (0);
	string = va_arg(list, char *);
	if (string == NULL)
	{
		/* 6 for (null) 1 for '\0' */
		result = malloc(sizeof(char) * 7);
		result = _place(result, "(null)");
		return (result);
	}
	if (string[0] == '\0')
		string = "";
	for (j = 0; string[j]; j++)
	;
	result = malloc(j + 1);
	if (!result)
		{
		free(result);
		return (NULL);
		}
	result = _place(result, string);

	return (result);
}

