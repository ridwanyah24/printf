#include "main.h"

/**
 *get_func - gets the correct conversion specifier for the operation
 *@str: pointer to the string
 *@s:index
 *
 *Return: pointer
 */
int (*get_func(const char *str, int s))(va_list)
{
	spec specs[] = {
		{"c", print_char}, {"s", print_string},
		{"%", print_percent}, {"d", print_dec_num},
		{"i", print_int}, {"%", print_percent},
<<<<<<< HEAD:working_dir/get_func.c
		{"b", print_binary}, {"u", print_unsigned_num},
		{"o", print_octal}, {"x", print_hex}, {"X", print_HEX},
=======
		{"b", print_binary},{"o", print_octal},
		{"x", print_hex}, {"X", print_HEX}, {"p", print_address}, 
>>>>>>> 85ffb8951e08dbfb0274e0112231c23d512a58a1:get_func.c
		{NULL, NULL}
	};
	int i = 0, j = 0;

	if (str)
	{
		while (specs[i].func != NULL)
		{
			if (specs[i].d[j] == str[s])
				return (specs[i].func);
			i++;
		}
	}

	return (NULL);
}
