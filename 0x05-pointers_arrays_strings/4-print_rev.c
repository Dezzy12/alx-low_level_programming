#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string
*/

void print_rev(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
	}

	ptr--;

	while (ptr >= s)
	{
		_putchar(*ptr);
		ptr--;
	}
	_putchar('\n')
}
