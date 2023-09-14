#include "main.h"

/**
* print_square - draws a square
* @size : number of times the character is to be printed
* Return: void
*/

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			_putchar("#");
		}
		_putchar('\n');
	}
}
