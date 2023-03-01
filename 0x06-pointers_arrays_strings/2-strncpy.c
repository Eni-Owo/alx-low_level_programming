#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (Pass)
 */
char *_strncpy(char *dest, char *src, int j)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < j)
			dest[i] = src[i];
		while (i < j)
			dest[i++] = '\0';

	return (dest);
}
