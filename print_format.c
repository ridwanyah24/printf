#include "main.h"

#define NUM_OF_SPECS 14

int print_error(char spec, char prev_char);
int print_spec(char spec, va_list args, flag *f);
int validate_spec(char spec);
int validate_flag(va_list num, char flg, flag *f);

/**
  *print_format - print the format string to the stdout
  *@format: the format string
  *@args: the args to be formatted
  *
  *Return: the lenght of the characters to be printed
  */
int print_format(const char *format, va_list args)
{
	const char *p;
	flag flags;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		initialize_flag(&flags);
		if (*p == '%')
		{
			p++;
			while (validate_flag(args, *p, &flags))
				p++;
			while (validate_precision(*p, args, &flags))
				p++;
			sort_flags(&flags);
			count += (validate_spec(*p))
				? print_spec(*p, args, &flags)
				: print_error(*p, *(p - 1));
		} else
			count += _putchar(*p);
	}
	return (count);
}

/**
  *validate_spec - checks if a char is a specifier
  *@spec: the given specifier
  *
  *Return: 1 of spec else 0
  */
int validate_spec(char spec)
{
	char *specs = "c%sidbxXoupSrR";
	int i;

	for (i = 0; specs[i]; i++)
	{
		if (specs[i] == spec)
		{
			return(1);
		}
	}
	return (0);
}

/**
  *print_spec - selects the appropriate function to print the
  *given spec
  *@spec: the given specifier
  *@args: input argument to be printed
  *f: pointer to the flag given
  *
  *Return: lenght of the characters printed
  */
int print_spec(char spec, va_list args, flag *f)
{
	fmt_spec f_specs[] = {
		{'c', print_c},
		{'%', print_per_symb},
		{'s', print_s},
		{'d', print_int},
		{'i', print_int},
		{'b', print_b},
		{'x', print_x},
		{'X', print_X},
		{'o', print_o},
		{'u', print_u},
		{'p', print_p},
		{'S', print_S},
		{'r', rev_string},
		{'R', rot13}
	};
	int i, lenght;

	for (i = 0; i < NUM_OF_SPECS; i++)
	{
		if (spec == f_specs[i].spec)
			lenght = f_specs[i].func(args, f);
	}
	return (lenght);
}

/**
  *print_error - prints the appropriate char if the spec is wrong
  *@spec: the spec
  *@prev_char: the previous char to the spec
  *
  *Return: the lenght of the printed chars
  */
int print_error(char spec, char prev_char)
{
	int lenght = 0;

	lenght += _putchar('%');
	if (prev_char == ' ')
		lenght += _putchar(' ');
	if (spec)
		lenght += _putchar(spec);

	return (lenght);
}

/**
  *validate_flag - checks the given flags
  *@num: the specfier
  *@flg: the flag
  *@f: pointer to the flags
  *
  *Return: 1 if there's a flag,else 0
  */
int validate_flag(va_list num, char flg, flag *f)
{
	int i = 0;

	if (flg == ' ')
	{
		f->space = 1;
		i = 1;
	}
	else if (flg == '#')
	{
		f->hash = 1;
		i = 1;
	}
	else if (flg == '+')
	{
		f->plus = 1;
		i = 1;
	}
	else if (flg == '-')
	{
		f->minus = 1;
		i = 1;
	}
	else if (flg == 'l')
	{
		f->l = 1;
		i = 1;
	}
	else if (flg == 'h')
	{
		f->h = 1;
		i = 1;
	}
	else
		i = check_width(flg, num, f);
	return(i);
}
