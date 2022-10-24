#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout.
 * @str: input string.
 * Return: void.
 */
void _puts(char *str)
{
	int num = 0;

	while (num >= 0)
	{
		if (str[num] != '\0')
		{
			_putchar(str[num]);
			num++;
		} else
		{
			num = -1;
			_putchar('\n');
		}
	}
}
