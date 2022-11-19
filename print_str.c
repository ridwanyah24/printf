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
	char null[] = "(null)";
	string = va_arg(args, char *);

	if (string == NULL)
	{
		for(i = 0; null[i] != '\0'; i++)
		{
			_putchar(null[i]);
		}
		return (100);
	}
	if(args)
	{
		for (j = 0; string[j] != '\0'; j++)
		{
			_putchar(string[j]);
		}
	}
	return (0);
}
