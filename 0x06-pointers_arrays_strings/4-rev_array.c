#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: input array
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
