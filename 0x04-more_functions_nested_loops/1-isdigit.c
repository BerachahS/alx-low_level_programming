#include "main.h"
#include<stdio.h>

/**
 *_isdigit - function that checks whether a character is an
 *integer between 0-9 or not
 *@c :the character that will be tested
 *
 * Return: 1 if it is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	return (0);
}
