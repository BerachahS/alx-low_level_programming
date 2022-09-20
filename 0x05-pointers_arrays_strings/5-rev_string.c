#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter s
 * Return : string
 */
void rev_string(char *s)
{
	char tmp;
	int i;
	int length1;
	int length2;

	length1 = 0;
	length2 = 0;

	while (s[length] != '\0')
		length1++;

	length2 = length1 - 1;
	for (i = 0, i < length1; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length -= 1;
	}
}
