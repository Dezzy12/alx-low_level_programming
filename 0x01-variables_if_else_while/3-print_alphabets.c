#include <stdio.h>
/**
* main - Represents the entry point of our C program
* Return: This is the return value of program, 0 is used in almost all cases
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
