#include "main.h"

/**
  * get_spec_func - Selects a function depending on the conversion specifier.
  * @c: Directive from format to know the conversion specifier.
  *
  * Return: A function depending on the conversion specifier.
  */

int (*get_spec_func(char c))(va_list)
{
	int i = 0;
	spec_t specs[] = {
		{'c', spec_char},
		{'s', spec_str},
		{'i', spec_int},
		{'d', spec_int},
		{'b', spec_bin},
		{'u', spec_uns},
		{'o', spec_oct},
		{'x', spec_hex},
		{'X', spec_HEX},
		{'p', spec_adr},
		{'!', spec_other},
	};
	while (i < 10)
	{
		if (specs[i].spec == c)
			return (specs[i].f);
		i++;
	}
	_putchar('%');
	_putchar(c);
	return (specs[i].f);
}
