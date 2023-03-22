#include "main.h"

/**
 * _abs - Check main
 * @r: Integer input 
 * Description: Prints the absolute of an integer.
 * Return: Abolute value of integer r.
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
		return (r * -1);
}
