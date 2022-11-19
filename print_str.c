#include "main.h"
/**
  *print_str - prints a string
  *@args: arguments
  *Return: integer
  */
int print_str(va_list args)
{
	char *string;
	int j;

	if(args)
	{
		string = va_arg(args, char*);
		for (j = 0; string[j] != '\0'; j++)
		{
			_putchar(string[j]);
		}
		return (0);
	}
}
