#include "main.h"
/**
  *print_b - prints an unsigned int in binary
  *@b: unsigned int to print
  *@f: the flag
  *
  *Return: num of printed digits
  */
int print_b(va_list b, flag *f)
{
	unsigned long int n = va_arg(b, unsigned int);

	(void)f;
	return (_puts(convert(n, 2, 0)));
}
