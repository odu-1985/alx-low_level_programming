#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: The character to be printed
*/
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar(10);
}
