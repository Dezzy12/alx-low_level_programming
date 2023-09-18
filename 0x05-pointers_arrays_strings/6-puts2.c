#include "main.h"
/**
* puts2 - function that prints every other character of a string,
*starting with the first character,
* starting with the first one
* @str: input
* Return: print
*/

void puts2(char *str)
{
	int length = 0;
	int j = 0;
	char *k = str;
	int i;

	while (*k != '\0')
	{
		k++;
		length++;
	}
	j = length - 1;
	for (i = 0 ; i <= j ; i++)
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
