#include "main.h"
/**
 * _isupper - check for uppercase
 * @c: char to check
 * Return: 1 if c@ is uppercase otherwise print 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
