#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* swap_int- Swaps the values of two integers
* @a: value of first integer
* @b: value of second integer
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
