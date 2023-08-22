#include "main.h"

/**
 * _strdup - funct that duplicates the string in the heap memory.
 * @s: Type char pointer string.
 * Return: duplicated string.
 */
char *_strdup(const char *s)
{
	char *new;
	size_t len;

	len = _strlen(s);
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	_memcpy(new, s, len + 1);
	return (new);
}
