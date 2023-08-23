#include "hsh.h"

/**
 * _strcat - join the two strings
 * @dest: char pointer dest of the copied str
 * @src: const char pointer the source of str
 * Return: dest
 */
char *_strcat(char *dest, const char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
