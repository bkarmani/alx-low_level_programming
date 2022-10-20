#include "main.h"
/**
 * _isalpha - checks if c is an alphabet
 * @c: character to be examined
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A' && c <= 'z' || c <= 'Z')
		return (1);
	else
		return (0);
}
