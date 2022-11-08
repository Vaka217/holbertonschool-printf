#include "main.h"

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

int spec_adr(va_list list)
{
	long int adress = va_arg(list, long int);
	int i = 0, count = 0;
	char *ptr = NULL;

	ptr = get_adress(adress, 16);
	_putchar('0');
	_putchar('x');
	for ( ; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}
