#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>

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
void _putnum(unsigned int i, int *p);
int (*get_spec_func(char c))(va_list);

#endif
