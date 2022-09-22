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
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
	{
		dest[dest_len++] = scr[i];
	}
	return (dest);
}
