#include <stdarg.h>
#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
  * _printf - produces output according to a format.
  * @format: Character string composed of zero or more directives.
  *
  * Return: The number of characters printed (excluding the null byte).
  */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, j, count = 0, *p = &count;
	char *str;

	while (format && format[i])
	{
		va_start(list, format);
		if (format[i - 1] == '%')
		{
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(list, int), p);
					break;
				case 's':
					str = va_arg(list, char *);
					for (j = 0; str[j] != '\0'; j++)
						_putchar(str[j], p);
					break;
				case 'd':
					_putnum(va_arg(list, int), p);
					break;
				case 'i':
					_putnum(va_arg(list, int), p);
					break;
				case '%':
					_putchar('%', p);
					break;
			}
		}
		else if (format[i] != '%')
			_putchar(format[i], p);
		i++;
	}
	return (count);
}
