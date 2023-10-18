#include "main.h"
/**
 * _print_i_d - print decimal numbers
 *@z: numbers
 *@water: base
 * Return: recursion
 */
int _print_i_d(int z, int water)
{
	int i_d_x;
	char *s_al;

	s_al = "0123456789abcdef";
	if (z < 0)
	{
		write(1, "-", 1);
		return (_print_i_d(-z, water) + 1);
	}
	else if (z < water)
	{
		return (_print_char(s_al[z]));
	}
	else
	{
		i_d_x = _print_i_d(z / water, water);
		return (i_d_x + _print_i_d(z % water, water));
	}
}
