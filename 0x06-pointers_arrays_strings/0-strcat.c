#include "main.h"

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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = scr[index];
	}
	return (dest);
}
