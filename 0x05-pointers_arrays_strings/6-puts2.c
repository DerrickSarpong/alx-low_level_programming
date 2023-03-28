#include "main.h"

/**
* puts2 - Prints every other characrter of a string
* @str: input string
*/

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len])
		len++;	
	len -= 1;

	for  (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
