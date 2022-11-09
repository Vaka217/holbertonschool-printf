#include "main.h"

/**
  * spec_ASCII_str - Prints a string changing its unprintable characters.
  * @list: Variadic list with the content to write.
  *
  * Description: First checks if the string is NULL, in that case just prints
  * "(null)" and add the number of characters to the counter. In the other
  * case, prints each character of the string, except that changes the
  * unprintable characters to "\x" followed by the ascii value of the
  * unprintable character in hexadecimal.
  * Return: Number of characters printed.
  */

int spec_ASCII_str(va_list list)
{
	char *str = va_arg(list, char *), *ptr = NULL;
	int i = 0, j = 0, count = 0, ascii;

	if (!str)
	{
		str = "(null)";
		count += 6;
		return (count);
	}
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			ascii = str[i];
			ptr = get_number(ascii, 16);
			string_toupper(ptr);
			for ( ; ptr[j]; j++)
			{
				_putchar(ptr[j]);
				count++;
			}

		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
  * spec_rev - count the number of characters of a string reversed.
  * @list: Variadic list with the content to print.
  *
  * Description: First check if the string is.
  * Return: Number of characters printed.
  */

int spec_rev(va_list list)
{
	char *str = va_arg(list, char *);
	int count = 0;

	if (!str)
	{
		str = "(llun)";
		count += 6;
		return (count);
	}
	count += print_rev(str);
	return (count);
}

/**
  * spec_ROT - count the number of characters of a printed ROT13 string.
  * @list: Variadic list with the content to print.
  *
  * Description: First chek.
  * Return: Number of characters printed.
  */

int spec_ROT(va_list list)
{
	char *str = va_arg(list, char *);
	int count = 0;

	if (!str)
	{
		str = "(ahyy)";
		count += 6;
		return (count);
	}
	count += print_rot13(str);
	return (count);
}
