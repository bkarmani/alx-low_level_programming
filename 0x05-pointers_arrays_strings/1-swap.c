#include <stdio.h>
/**
 * swap_int - swaps the values of two variables
 * @a: first vale
 * @b: second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
