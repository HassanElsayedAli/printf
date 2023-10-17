#include "main.h"
/**
 * _print_format - check format
 *@ptr: name of arguments
 *@space: format
 * Return: x
 */
int _print_format(char space, va_list ptr)
{
	int x = 0;

	if (space == 'c')
	{
		x += _print_char(va_arg(ptr, int));
	}
	else if (space == 's')
	{
		x += _print_str(va_arg(ptr, char *));
	}
	else
	{
	    x += _print_char(space);
	}
	return (x);
}
