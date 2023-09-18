#include "main.h"
/**
* rev_string - function that reverses a string
* @s: Input string
**/

void rev_string(char *s)
{
	int j = 0;
	int i;

	while (s[counter] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		count--;
		char temp = s[i];

		s[i] = s[j];
		str[j] = temp;
	}
}
