#include "main.h"
#include <string.h>

/**
*_strcat - this is a function that appends one string to another
*
* Description: using the _strcat function, one string will be appended
* to another
*
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '0'; i++)
	{
		dest[len] = scr[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
