#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
char *cp = s;
char key[] = {'A', 'E', 'O', 'T', 'L'};
char value[] = {4, 3, 0, 7, 1};
unsigned int i;

while (*s)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*s == key[i] || *s == key[i] + 32)
{
*s = 48 + value[i];
}
}
c++;
}

return (cp);
}

