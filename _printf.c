#include "main.h"

/**
  * _printf - produces output according to a format.
  * @format: Character string composed of zero or more directives.
  *
  * Return: The number of characters printed (excluding the null byte).
  */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, count = 0, percount = 0, spcs = 1;

	if (format)
	{
		va_start(list, format);
		for ( ; format[i]; i++)
		{
			if (format[i - spcs] == '%' && percount % 2 != 0 && format[i] == ' ')
				spcs++;
			else
			{
				if (format[i] == '%')
					percount++;
				if (percount % 2 == 0 && percount != 0 && format[i] == '%')
				{
					_putchar('%');
					count++;
				}
				else if (format[i - spcs] == '%' && format[i] != '%' && percount % 2 != 0)
				{
					count += (*get_spec_func(format[i]))(list);
					percount = 0;
				}
				else if (format[i] != '%')
				{
					_putchar(format[i]);
					count++;
					percount = 0;
				}
				spcs = 1;
			}
		}
		va_end(list);
	}
	if (count == 0 || (percount % 2 != 0 && format[i - spcs] == '%') || !format)
		return (-1);
	return (count);
}
