#include "main.h"
#include <string.h>

/**
 * _strncat - joins two strings with n byte
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);
{
	strncat(dest, src, n);
	return (dest);
}
