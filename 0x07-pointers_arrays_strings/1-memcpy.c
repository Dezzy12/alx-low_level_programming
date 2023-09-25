#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; r++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
