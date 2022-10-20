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
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
