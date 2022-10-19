#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
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
}
