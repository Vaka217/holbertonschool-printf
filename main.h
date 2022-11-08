#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct spec - Struct for the conversion specifiers and their functions.
 * @spec: Character which represent the conversion specifier.
 * @f: Functions for the conversion specifiers.
 *
 * Description: This struct contains the characters for each conversion
 * specifier and the functions required for printing the input gave for
 * each one.
 */

typedef struct spec
{
	char spec;
	int (*f)(va_list list);
} spec_t;
int spec_char(va_list list);
int spec_str(va_list list);
int spec_int(va_list list);
int spec_other(va_list list);
int spec_bin(va_list list);
int spec_uns(va_list list);
int spec_oct(va_list list);
int spec_hex(va_list list);
int spec_HEX(va_list list);
int spec_adr(va_list list);
char *string_toupper(char *str);
int (*get_spec_func(char c))(va_list);
char *get_number(unsigned int num, int base);
char *get_adress(long unsigned int num, int base);

#endif
