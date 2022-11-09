#include "main.h"

/**
  * get_specifier_func - Selects a function depending on the character given.
  * @c: Directive from format to know the conversion specifier.
  *
  * Description: Given a character, finds its corresponding conversion
  * specifier. If it exists then it returns the function associated with
  * the conversion specifier. If not, prints '%' followed by the character
  * and returns a function that justs add 2 for the counter of characters.
  * Return: A function depending on the conversion specifier.
  */

int (*get_specifier_func(char c))(va_list)
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
		{'p', spec_adress},
		{'S', spec_ASCII_str},
		{'r', spec_rev},
		{'R', spec_ROT},
		{'!', spec_other},
	};
	while (i < 13)
	{
		if (specs[i].spec == c)
			return (specs[i].f);
		i++;
	}
	_putchar('%');
	_putchar(c);
	return (specs[i].f);
}
