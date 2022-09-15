#include "main.h"
#include<stdio.h>

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be checked
 * Return: 1 if it is a character,
 * otherwise always return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
}
