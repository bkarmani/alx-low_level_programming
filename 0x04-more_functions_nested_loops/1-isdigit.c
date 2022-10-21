#include <stdio.h>
/**
 * _isdigit - detects numbers from 0 through 9
 * @c: value to check 
 * Return: 1 if c is a number, otherwise retturns 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
