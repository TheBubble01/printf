#include "main.h"
#include <stdlib.h>
/**
 * print_string - writes the string str to the stdout
 * @str: The string to print
 * @count: The number of charcters printed
 *
 * Return: 1
 */

int print_string(const char *str, int *count)
{
	while (*str != '\0')
	{
		print_char(*str, count);
		str++;
	}

	return (1);
}
