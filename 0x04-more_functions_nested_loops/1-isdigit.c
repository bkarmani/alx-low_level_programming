#include <stdio.h>
/**
 * _isdigit - checks for digits 1 through 9
 * @c: value to be checked
 * Return: 1 if c is a digit, otherwise returns 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
