#include "main.h"
/**
  *print_char - prints a character
  *@args: the arguments
  *
  *Return: integer
  */
int print_char(va_list args)
{
	char c;

	if (args)
	{
		c = va_arg(args, int);
		_putchar(c);
		return (0);
	}
}
