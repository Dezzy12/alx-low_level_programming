#include <stdio.h>
/**
* main - Represents the entry point of our C program
* Return: This is the return value of program, 0 is used in almost all cases
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n" sizeof(char));
	printf("Size of a int: %lu byte(s)\n" sizeof(int));
	printf("Size of a long int: %lu byte(s)\n" sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n" sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n" sizeof(float));
	return (0);
}
