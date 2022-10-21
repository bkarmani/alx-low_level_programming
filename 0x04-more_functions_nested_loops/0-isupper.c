#include "main.h"
/**
 * _isupper - detects if an alphabet is uppercase
 * @c: value to be checked
 * Return: 1 if c is uppercase, otherwise returns 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
