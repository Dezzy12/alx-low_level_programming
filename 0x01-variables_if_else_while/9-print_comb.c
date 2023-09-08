#include <stdio.h>
/**
* main - Represents the entry point of our C program
* Return: This is the return value of program, 0 is used in almost all cases
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
