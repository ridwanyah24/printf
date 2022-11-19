#include "main.h"
int main()
{
	char *string = "strings";
	char chars = 'c';

	_printf("This is a test %%\n");
	_printf("%s %c \nthe new test%q", string, chars);

	return (0);
}
