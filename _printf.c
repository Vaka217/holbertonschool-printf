#include "main.h"

/**
  * _printf - produces output according to a format.
  * @format: Character string composed of zero or more directives.
  *
  * Description: Produces output according to a format, a string that specifies
  * how subsequent arguments are converted for output.
  * Return: The number of characters printed (excluding the null byte) or -1
  * if an output error is encountered.
  */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, count = 0, percount = 0, spcs = 1;

	if (!format) /* This if works for returning error in case format is NULL */
		return (-1);
	va_start(list, format);
	for ( ; format[i]; i++)
	{ /* The if below works for counting the spaces between '%' and a specifier */
		if (format[i - spcs] == '%' && percount % 2 != 0 && format[i] == ' ')
			spcs++;
		else
		{ /* The if below works for counting each consecutive '%' */
			if (format[i] == '%')
				percount++;
			/* The below code contemplates three cases: %%, %char and only char */
			if (percount % 2 == 0 && format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[i - spcs] == '%' && format[i] != '%' && percount % 2 != 0)
			{
				count += (*get_specifier_func(format[i]))(list);
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
	if (percount % 2 != 0 && format[i - spcs] == '%')
		return (-1);
	return (count);
}

/* The last if works for taking in count the error when the last character */
/* is a '%' without being or having any conversion specifier. */
