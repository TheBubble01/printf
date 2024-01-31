#include <unistd.h>
/**
 * _putchar -writes the charavter c to the stdout
 * @c: The character to be printed
 *
 * Return: On succecess 1
 *	On error: -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
