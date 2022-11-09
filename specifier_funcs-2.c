#include "main.h"

/**
  * spec_uns - Converts a given number to its value in decimal.
  * @list: Variadic list with the content to write.
  *
  * Description: Same as spec_int, but doesn't check if the number is negative
  * because only prints unsigned values.
  * Return: Number of characters to print.
  */

int spec_uns(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int i = 0, count = 0;
	char *ptr = NULL;

	ptr = get_number(num, 10);
	for ( ; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}

/**
  * spec_oct - Converts a given number to its value in octal.
  * @list: Variadic list with the content to write.
  *
  * Description: Same as spec_int, but doesn't check if the number is negative
  * and uses base 8 because only prints unsigned octal values.
  * Return: Number of characters to print.
  */

int spec_oct(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int i = 0, count = 0;
	char *ptr = NULL;

	ptr = get_number(num, 8);
	for ( ; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}

/**
  * spec_hex - Converts a given number to its value in hexadecimal.
  * @list: Variadic list with the content to write.
  *
  * Description: Same as spec_int, but doesn't check if the number is negative
  * and uses base 16 because only prints unsigned hexadecimal values.
  * Return: Number of characters to print.
  */

int spec_hex(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int i = 0, count = 0;
	char *ptr = NULL;

	ptr = get_number(num, 16);
	for ( ; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}

/**
  * spec_HEX - Converts a given number to its value in hexadecimal.
  * @list: Variadic list with the content to write.
  *
  * Description: Same as spec_hex, but with the alphabetical characters in
  * uppercase.
  * Return: Number of characters to print.
  */

int spec_HEX(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int i = 0, count = 0;
	char *ptr = NULL;

	ptr = get_number(num, 16);
	string_toupper(ptr);
	for ( ; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}

/**
  * spec_adress - Converts a given adress to its value in hexadecimal.
  * @list: Variadic list with the content to write.
  *
  * Description: First checks if the adress is NULL, if that the case then
  * just print "(nil)" and add number of characters to the counter. Else, do
  * the same that spec_hex but with the function get_adress, the principal
  * difference between this and get_number is that get_adress receives a long
  * int, needed because of the size of an adress.
  * Return: Number of characters to print.
  */

int spec_adress(va_list list)
{
	long int adress = va_arg(list, long int);
	int i = 0, count = 0;
	char *ptr = NULL;

	if (!adress)
	{
		ptr = "(nil)";
		for ( ; ptr[i]; i++)
			_putchar(ptr[i]);
		count += 5;
		return (count);
	}
	ptr = get_adress(adress, 16);
	for ( ; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}
