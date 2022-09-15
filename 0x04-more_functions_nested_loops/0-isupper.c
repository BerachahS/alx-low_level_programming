#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be checked
 * Return: 1 if it is a character, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
