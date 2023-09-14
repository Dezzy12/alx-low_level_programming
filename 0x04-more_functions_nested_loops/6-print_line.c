#include "main.h"

/**
* print_line - draws a straight line
* @n : number of times the character is to be printed
* Return: void
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
