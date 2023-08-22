#include "main.h"

/**
 * *_strcpy - funct that Copies the string pointed to by src.
 * @dest: Type char pointer destination of the copied string.
 * @src: Type char pointer source of the string
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{

	size_t a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
