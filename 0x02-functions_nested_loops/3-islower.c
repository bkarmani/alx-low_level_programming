#include "main.h"
/**
 * _islower - function checks for lowercase character
 * @c: character to be checked
 * Return: 0 if c is lowercase and 0 if c is otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
