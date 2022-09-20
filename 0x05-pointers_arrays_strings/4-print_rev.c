#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: thestring to be reversed
 *
 * Return: string
 */
void print_rev(char *s)
{
	int i;
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
