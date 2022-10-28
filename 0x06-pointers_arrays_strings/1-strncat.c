#include "main.h"
#include <string.h>

/**
 * _strncat - joins two strings with n byte
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: string
 */
char *_strncat(char *dest, char *src, int n);
{
	char dest[100] = "Hello";
	char *src = "World";
	strncat(dest, src, n);
	return (dest);
}
