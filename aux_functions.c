#include "main.h"

/**
  * get_number - converts a given number to its value in its base.
  * @num: Given number.
  * @base: Base of the given number.
  *
  * Description: Receives an unsigned integer and saves its value in a given
  * base inside a string. Do that by iterating through each digit of the
  * number, dividing each by its base and filling the string with the
  * remainder of each division.
  * Return: Pointer to the array of characters where the converted number is.
  */

char *get_number(unsigned int num, int base)
{

	static char set[16] = "0123456789abcdef";
	static char aux[64];
	char *ptraux = NULL;
	int remainder = 0;

	ptraux = &aux[64];
	*ptraux = '\0';
	if (num == 0)
		*--ptraux = '0';
	for ( ; num; )
	{
		remainder = num % base;
		*--ptraux = set[remainder];
		num = num / base;
	}
	return (ptraux);
}

/**
  * *string_toupper - changes all lowercase letters of a string to uppercase.
  * @str: String to change.
  *
  * Description: Changes all lowercase letters of a string to uppercase.
  * Return: Pointer to the resulting string str.
  */
char *string_toupper(char *str)
{
	char *upperstr = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (upperstr);
}

/**
  * get_adress - converts a given adress to its value in hexadecimal.
  * @adress: Given adress.
  * @base: Hexadecimal base.
  *
  * Description: Does the same that get_number, but needed a parameter unsigned
  * long int instead of an unsigned int, because an adress ocuppies 8 bytes.
  * Return: Pointer to the array of characters where the converted adress is.
  */

char *get_adress(unsigned long int adress, int base)
{

	static char set[16] = "0123456789abcdef";
	static char aux[64];
	char *ptraux = NULL;
	int remainder = 0;

	ptraux = &aux[64];
	*ptraux = '\0';
	if (adress == 0)
		*--ptraux = '0';
	for ( ; adress; )
	{
		remainder = adress % base;
		*--ptraux = set[remainder];
		adress = adress / base;
	}
	*--ptraux = 'x';
	*--ptraux = '0';
	return (ptraux);
}

/**
  * print_rev - prints a string in reverse.
  * @str: string parameter.
  *
  * Description: Prints a string in reverse followd by a new line to stdout.
  * Return: Number of characters in the string..
  */

int print_rev(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
		i++;

	count = i;
	for (i = i; i >= 0; i--)
		if (str[i] != '\0')
			_putchar(str[i]);
	return (count);
}

/**
  * print_rot13 - prints a given string in ROT13.
  * @str: Given string.
  *
  * Description: Prints each alphabetical character of the string with the
  * alphabetical character 13 places in front, if it surpass z or Z, then
  * start counting again from a or A.
  * Return: Number of characters in the string.
  */

int print_rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 110)
				_putchar(str[i] - 13);
			else
				_putchar(str[i] + 13);
		}
		else if ((str[i] >= 'A') && str[i] <= 'z')
		{
			if (str[i] >= 78)
				_putchar(str[i] - 13);
			else
				_putchar(str[i] + 13);
		}
		else
			_putchar(str[i]);
	}
	return (i);
}
