#include <stdio.h>
/**
* main - Represents the entry point of our C program
* Return: This is the return value of program, 0 is used in almost all cases
*/
int main(void)
{
	char character;
	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
