#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
int i, j, t;

for (i = 0; j = (n - 1); i < j; i++, j--)
{
t = a[i];
a[i] = a[j];
a[j] = t;
}
}

