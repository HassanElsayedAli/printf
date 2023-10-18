#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _print_char(int c);
int _print_str(char *str);
int _print_format(char space, va_list ptr);



#endif

