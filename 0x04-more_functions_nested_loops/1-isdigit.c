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
	char i = '0';
	int isdigit = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
