#include "main.h"
#include<stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: value of first integer
 * @b: value of second integer
 *
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;
}
