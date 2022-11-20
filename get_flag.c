#include "main.h"

/**
 *get_flag - calls the structure flag
 *@str: pointer to the string
 *@s:index
 *
 *Return: pointer
 */
int get_flag(const char *str, int s)
{
	spec specs[] = {
		{"c", print_char}, {"s", print_string},
		{"%", print_percent}, {"d", print_dec_num},
		{" d", print_space_dec_num}, 
		{"+d", print_plus_dec_num}, {"+ d", print_plus_dec_num},
		{" +d", print_plus_dec_num}, {"ld", print_long_dec_num},
		{"hd", print_short_dec_num}, {"hi", print_short_dec_num},
		{"li", print_long_dec_num},
		{"lu", print_long_unsigned_dec}, {"hu", print_short_unsigned_dec},
		{"i", print_dec_num}, {"+i", print_plus_dec_num},
		{" +i", print_plus_dec_num},
		{"+ i", print_plus_dec_num}, {"%", print_percent},
		{"b", print_binary}, {"o", print_octal}, {"lo", print_long_octal},
		{"#o", print_hash_octal},{"ho", print_short_octal},
		{"hx", print_short_hex}, {"hX", print_short_HEX}, 
		{"lx", print_long_hex}, {"lX", print_long_HEX},
		{"x", print_hex}, {"X", print_HEX}, {"p", print_address},
		{"#x", print_hash_hex}, {"r", print_rev}, {"R", print_rot13},
		{"u", print_unsigned_dec}, {"S", print_STRING}, 
		{NULL, NULL}
	};
	int i = 0, j = 0;

	if (str)
	{
		while (specs[i].func != NULL)
		{
			if (specs[i].d[j] == str[s])
			{
				if (specs[i].d[j + 1] == '\0')
				{
					return (j + 1);
				}
				else
				{
					i--;
					j++;
					s++;
				}
			} i++;
		}
	}

	return (0);
}
