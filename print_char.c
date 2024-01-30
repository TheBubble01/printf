#include "main.h"
#include <stdlib.h>
/**
* print_char -writes the character to the stdout
* @c: The character to be printed
* @count: count the number of characters printed
* Return: 1
*/

int print_char(int c, int *count)
{
	_putchar(c);
	if (c != '\n')
	{
		(*count)++;
	}
	return (1);
}
