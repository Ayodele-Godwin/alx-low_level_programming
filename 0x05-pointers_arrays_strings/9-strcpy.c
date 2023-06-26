#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: cophy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int I = 0;
	int X = 0;

	while (*(src + I) != '\0')
	{
		I++;
	}
	for (; x < I; x++)
	{
		dest[X] = src[X];
	}
	dest[I] = '\0';
	return (dest);
}
