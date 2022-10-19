#include "main.h"
/**
 * print_alphabet - prints alphabets 10 times
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char letters;
	int num;

	num = 0;

	while (num < 10)
	{
		num++;
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
			_putchar('\n');
	}
	return (0);
}
