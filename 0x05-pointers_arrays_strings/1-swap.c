#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 * @a: the first integer to be swaped
 * @b: the second integer to be swaped with the ferst number
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

