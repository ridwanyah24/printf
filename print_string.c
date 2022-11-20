#include "main.h"

/**
 *print_string - prints a string
 *@list: list of arguments
 *
 *Return: 1
 */
int print_string(va_list list)
{
	int i;
	char u[] = "(null)";
	char *string;
	
	string = va_arg(list, char *);
	if (string == NULL)
	{
		for (i = 0; u[i] != '\0'; i++)
			_putchar(u[i]);
		return (6);
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}
