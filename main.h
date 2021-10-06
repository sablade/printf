#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct convert - defines a structure for symbols/format specifiers
 * and their respective functions
 * @sym: symbol/format specifier
 * @f: function pointer to associated function
 */
struct convert{
	char *sym;
	int(*f)(va_list);
};
typedef struct convert convert_t;

/** Main Project Functions **/
int parser(const char *format, convert_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_HEX(va_list list);

/** Auxilliary/Helper Functions **/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int);

#endif/** MAIN_H **/
