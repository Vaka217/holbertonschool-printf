#include "main.h"

/**
  * spec_char - writes a character to stdout.
  * @list: Variadic list with the content to write.
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
  * @list: Variadic list with the content to write.
  *
  * Return: The number of characters printed.
  */

int spec_str(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;

	if (!str)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
  * spec_int - writes an integer to stdout.
  * @list: Variadic list with the content to write.
  *
  * Description: This function first check if the number is negative, to print
  * the '-', add 1 to count and then change the number for its opposite. After
  * using get_number to get the number in a string, it prints the number and
  * counts each digit.
  * Return: The number of characters printed (depending on the size of the
  * integer).
  */

int spec_int(va_list list)
{
	int count = 0, i = 0, num = va_arg(list, unsigned int);
	char *ptr = NULL;

	if (num < 0)
	/* We take each number as a character when we print it with _putchar, */
	/* meaning for example that with 2 we print 2 + 48, because the ASCII value */
	/* of 2 is 50. If we do the same with negative numbers, for example -2 + 48 */
	/* gives 46, which is not the value of 2, is not even a number. That's why */
	/* we check this. */
	{
		_putchar('-');
		count++;
		num = -num;
	}
	ptr = get_number(num, 10); /* It returns the number in the given base as a */
				   /* string. */
	for ( ; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}

/**
  * spec_other - returns 2, the character and the '%' printed.
  * @list: Variadic list with the content to write.
  *
  * Return: The number of characters printed, in this case the character
  * that is not a conversion specifier and the '%' previous to it.
  */

int spec_other(__attribute__((unused)) va_list list)
{
	return (2);
}

/**
  * spec_bin - prints a given integer in binary.
  * @list: Variadic list with the content to write.
  *
  * Description: Same as spec_int, but doesn't check if the number is negative
  * and uses base 2 (binary).
  * Return: The number of characters printed.
  */

int spec_bin(va_list list)
{
	int count = 0, i = 0, num = va_arg(list, unsigned int);
	char *ptr = NULL;

	ptr = get_number(num, 2);
	for ( ; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}
