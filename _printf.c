#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"%%", printf_percent},
		{"c", printf_char},
		{"s", printf_string},
		{"i", printf_integer},
		{"d", printf_integer},
		{"b", printf_binary},
		{"x", printf_hex},
		{"X", printf_HEX},
		{"u", printf_unsigned_integer},
		{"o", printf_octal},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = format_reciever(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
