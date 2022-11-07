#include "main.h"

/**
  * _putnum - writes the integer i to stdout.
  * @i: The number to print.
  * @p: Pointer to the counter of characters printed.
  *
  */

void _putnum(int i, int *p)
{
		if (i < 0)
		{
			_putchar('-');
			i = -i;
			*p += 1;
		}

		if (i / 10)
			_putnum(i / 10, p);

		_putchar(i % 10 + '0');
		*p += 1;
}
