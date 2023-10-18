#include "main.h"
/**
 * _print_str - print string
 * @str: string
 * Return: x
 */
int _print_str(char *str)
{
	int x = 0;

	for (; *str != '\0';)
	{
		_print_char((int)*str);
		++x;
		++str;
	}
	return (x);
}
