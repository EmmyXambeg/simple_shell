#include "main.h"

/**
 * _isdigit - if string passed is a number return true
 *
 * @s: string input
 * Return: if string is a number return 1 else 0
 */
int _isdigit(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
	}
	return (1);
}
