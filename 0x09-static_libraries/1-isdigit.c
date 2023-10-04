#include "main.h"

/**
* _isdigit - function checks for uppercase character
* @c: character input
* Return: 0 or 1
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
