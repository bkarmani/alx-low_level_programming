#include <stdio.h>
/**
 * print_alphabet - prints alphabets 10 times
 *
 * Return: always 0 (success)
 */
int main(void)
{
        char letters;
        int num;

        num = 0;

        while (num < 10)
        {
                num++;
                for (letters = 'a'; letters <= 'z'; letters++)
                        putchar(letters);
                        putchar('\n');
        }
        return (0);
}
       
