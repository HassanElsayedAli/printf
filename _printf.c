#include "main.h"
/**
 * _printf - like printf
 * @format: format
 * Return: x
 */
int _printf(const char *format, ...)
{
	int x;
	va_list ptr;

	va_start(ptr, format);
	x = 0;
	for (; *format != '\0';)
	{
		if (*format == '%')
		{
			x += _print_format(*(++format), ptr);
		}
		else
		{
			x += write(1, format, 1);
		}
		++format;
	}
	va_end(ptr);
	return (x);
}
