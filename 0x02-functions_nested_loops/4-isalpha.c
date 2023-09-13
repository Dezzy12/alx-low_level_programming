#include "main.h"

/**
* _isalpha - A funtion that checks if a character is alphabet
* @c: The character inputted
* Return: returns 1 if character is lowercase and 0 if otherwise
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
