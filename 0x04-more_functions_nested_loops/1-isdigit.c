#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* _isdigit - Checks for a digit
* @c: Input to be checked
*
* Return: 1 if digit, 0 otherwisw
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
