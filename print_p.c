#include "main.h"
/**
  *print_p - prints a given address
  *@pointer: the address
  *@f: the flag
  *
  *Return: the lenght of the address printed
  */
int print_p(va_list pointer, flag *f)
{
	int lenght;
	unsigned long int p = (unsigned long int) va_arg(pointer, void *);

	(void)f;
	if(!p)
		return (_puts("(nil)"));
	lenght = _puts("0x") + _puts(convert(p, 16, 1));

	return (lenght);
}
