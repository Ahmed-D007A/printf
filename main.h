#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct format - structer denfinetion of the format.
 * @fcase: the cases of the format
 * @fun: the pointed function that point to the function case.
*/
typedef struct format
{
	char fcase;
	format_f fun;
} format_s;
typedef int (*format_f)(va_list);
int _putchar(char c);
void string_rev(char *str, int len);
int put_string(char *str);
int case_c(va_list ap);
int case_s(va_list ap);
int case_mod(va_list ap __attribute__((unused)));
int _printf(const char *format, ...);
#endif