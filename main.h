#include <stdarg.h>
#include <unistd.h>

#ifndef main_h
#define main_h

int _printf(const char *format, ...);
int _putchar(char c);
typedef struct spec
{
	char spec;
	int (*f)(va_list list);
} spec_t;
int spec_char(va_list list);
int spec_str(va_list list);
int spec_int(va_list list);
int spec_other(va_list list);
void _putnum(int i, int *p);
int (*get_spec_func(char c))(va_list);

#endif
