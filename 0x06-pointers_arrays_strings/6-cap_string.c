#include "main.h"

/**
 * cap_string - function that capitalizes strings
 * @x: string to be convrted to uppercase
 *
 * Return: string
 */
char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;

			while (i < len)
			{
				if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
				s[a] = s[a] - 32;
				i++;
			}
			a++;
	}

	return (x);
}

