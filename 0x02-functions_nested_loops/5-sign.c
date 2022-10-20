#include "main.h"
/**
 * print_sign - prints the sign of n
 * @n: character to examine
 * Return: 0,1 or -1 if n is >,= or > zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
		return (-1);
		_putchar('-');
}
