#include "main.h"
/**
  *print_per_symb - prints the percentage sign
  *@v: the format
  *@f: the flag
  *
  *Return: the lenght of printed %
  */
int print_per_symb(va_list v, flag *f)
{
	(void)f;
	(void)v;

	return(_putchar('%'));
}
