#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - function that roduces output according to a format
 * @format: format (char, string, int, decimal)
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			switch (*format)
			{
				case 'c':
					print_char(va_arg(args, int), &count);
					break;
				case 's':
					print_string(va_arg(args, char*), &count);
					break;
				default:
					print_char('%', &count);
					print_char(*format, &count);
			}
		}
		else
		{
			print_char(*format, &count);
		}
		format++;
	}
	va_end(args);
	return (count);
}
