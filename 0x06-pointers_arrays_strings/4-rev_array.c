#include "main.h"
/**
 * reverse_array - to reverse
 * @a: array
 * @n: number of element in array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
