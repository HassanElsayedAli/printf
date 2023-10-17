#include "main.h"
/**
 * _print_char - print char
 * Return: number of characters printed
 * @c: input
 */
int _print_char(int c)
{
	return (write(1, &c, 1));
}
