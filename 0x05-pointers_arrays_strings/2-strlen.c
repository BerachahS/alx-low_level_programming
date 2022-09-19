#include "main.h"
#include<stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: string
 *
 * Return: 0 always
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
