#include "main.h"
/**
 * _strcat - appends the src string to the dest
 * @dest: destination string
 * @src: source string
 * Return: dest (destination string)
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;
	int i;

	len1 = 0;
	len2 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
