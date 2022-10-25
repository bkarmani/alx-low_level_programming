#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: pointer to string variable
 *
 * Return: str
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
