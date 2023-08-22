#include "main.h"

/**
 * _atoi -  string to be converted to an integer.
 * @s: string input.
 * Return: an int.
 */
int _atoi(char *s)
{
	unsigned int countA = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + countA) != '\0')
	{
		if (size > 0 && (*(s + countA) < '0' || *(s + countA) > '9'))
			break;

		if (*(s + countA) == '-')
			pn *= -1;

		if ((*(s + countA) >= '0') && (*(s + countA) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		countA++;
	}

	for (i = countA - size; i < countA; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
