#include "hsh.h"

/**
 * _strcmp - Funct that compares two str.
 * @s1: type str compared
 * @s2: type str compared
 * Return: null.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++)
		;

	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}
