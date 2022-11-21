#include "main.h"
/**
  *print_c - prints a char on the std
  *@c: the char
  *@f: the flag
  *Return: the lenght of the char printed
  */
int print_c(va_list c, flag *f)
{
	(void)f;
	return (_putchar(va_arg(c, int)));
}
