#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

/* main functions :) */
int _printf(const char *format, ...);
int _putchar(const char c);
int _putstring(const char *str);
void str_rev(char *str, int len);

/* type definitions :) */
typedef int (*format_f)(va_list);
typedef struct
{
	char fcase;
	format_f fun;
} format_s;

/* format the functions */
int case_c(va_list ap);
int case_s(va_list ap);
int case_mod(va_list ap);
int case_num(va_list ap);

#endif
