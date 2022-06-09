#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that helps check for alphabetic character
 *
 * @c: return char type
 *
 * Return: return 0 on true and 1 on false
 */

int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
