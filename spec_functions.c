#include "main.h"

/**
  * spec_char - writes a character to stdout.
  * @list: Variadic list with the character to write.
  *
  * Return: The number of characters printed, only 1 in this case.
  */

int spec_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
  * spec_str - writes an array of characters to stdout.
  * @list: Variadic list with the characters to write.
  *
  * Return: The number of characters printed.
  */

int spec_str(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;

	if (!str)
	{
		str = "(null)";
		i = 6;
	}
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
  * spec_int - writes an integer to stdout.
  * @list: Variadic list with the integer to write.
  *
  * Return: The number of characters printed (depending on the size of the
  * integer.
  */

int spec_int(va_list list)
{
	int count = 0, i = 0, num = va_arg(list, unsigned int);
	char *p = NULL;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	p = get_number(num, 10);
	for ( ; p[i]; i++)
	{
		_putchar(p[i]);
		count++;
	}
	return (count);
}

/**
  * spec_other - returns 2, the character and the '%' printed.
  * @list: Variadic list with the character to write.
  *
  * Return: The number of characters printed, in this case the character
  * that is not a conversion specifier and the '/' previous to it.
  */

int spec_bin(va_list list)
{
	int count = 0, i = 0, num = va_arg(list, unsigned int);
	char *p = NULL;

	p = get_number(num, 2);
	for ( ; p[i]; i++)
	{
		_putchar(p[i]);
		count++;
	}
	return (count);
}

int spec_other(__attribute__ ((unused)) va_list list)
{
	return (2);
}
