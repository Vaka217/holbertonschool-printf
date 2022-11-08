#include "main.h"

/**
  *
  */

char *get_number(unsigned int num, int base)
{

	static char set[16] = "0123456789abcdef";
	static char aux[64];
	char *ptraux = NULL;
	int r = 0;

	ptraux = &aux[64];
	*ptraux = '\0';
	if (num == 0)
		*--ptraux = '0';
	for ( ; num; )
	{
		r = num % base;
		*--ptraux = set[r];
		num = num / base;
	}
	return (ptraux);
}
