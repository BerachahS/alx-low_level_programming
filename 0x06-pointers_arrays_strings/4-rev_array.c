#include "main.h"

/**
 * reverse_array - a function that reverses an array
 * @a: array a
 * @n: an element of array a
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, g;

	p = a;

	for (i = 0; i < n; i++)

	p++;
	for (g = 0; g < n / 2; g++)
	{
		aux = a[g];
		a[g] = *p;
		*p = aux;
		p--;
	}
	return ();
}
