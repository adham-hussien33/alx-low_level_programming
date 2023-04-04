#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to the destination array
 * @src: pointer to the source array
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int itr;

for (itr = 0; itr < n; itr++)
{
dest[itr] = src[itr];
}

return (dest);
}

