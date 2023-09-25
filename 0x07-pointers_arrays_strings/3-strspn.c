#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r = 0;

	while (*s)
	{
		for (; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
}
