#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int format_reciever(const char *format, conver_t f_list[], va_list arg_list);
int printf_percent(va_list);
int printf_integer(va_list);
int printf_char(va_list);
int printf_string(va_list);
int printf_binary(va_list);
int printf_unsigned_integer(va_list list);
int printf_octal(va_list list);
int printf_hex(va_list list);
int printf_HEX(va_list list);
int printf_String(va_list val);
int printf_pointer(va_list val);
int printf_rev(va_list l);
int printf_rot13(va_list list);

int printf_number(va_list args);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int printf_unsgined_number(unsigned int n);
int hex_check(int num, char x);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int isNonAlphaNumeric(char c);
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);

int get_flag(char *f);

#endif
