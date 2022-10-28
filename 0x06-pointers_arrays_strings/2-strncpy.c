#include "main.h"
#include <string.h>

/**
 * _strncpy - for copying purpose
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
			j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
