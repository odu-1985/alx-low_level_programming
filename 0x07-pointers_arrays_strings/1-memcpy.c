#include "main.h"

/**
* _memcpy - copies memory area
* @src: Memory Area to be copied from
* @dest: Memory Area to copy to
* @n: Bytes to be copied
* Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		*(dest + p) = *(src + p);
	}
	return (dest);
}
