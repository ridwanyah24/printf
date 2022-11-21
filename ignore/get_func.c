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
		{"b", print_binary},{"o", print_octal},
<<<<<<< HEAD:ignore_for_now/get_func.c
		{"x", print_hex}, {"X", print_HEX}, {"p", print_address}, 
=======
		{"x", print_hex}, {"X", print_HEX}, {"p", print_address},
		{"u", print_unsigned_dec}, {"S", print_STRING}, 
>>>>>>> 06077f7fad93e35a416f50ecff3f598800297b2a:get_func.c
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
