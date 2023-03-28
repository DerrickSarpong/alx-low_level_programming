#include "main.h"

/**
* _strlen: Returns the length of a string
* @s: Input string
*
* Return: The length of the string
*/

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
