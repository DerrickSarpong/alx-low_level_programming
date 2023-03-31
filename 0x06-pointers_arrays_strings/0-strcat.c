#include "main.h"

/**
* _strcat - this function will concatenated two strings
* @dest: the string that will modified
* @src: the string that wiill be concatenated to @des.
*
* Return: a pointer to @dest
*/

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
