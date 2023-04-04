#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @s: The string to capitalize.
*
* Return: A pointer to the capitalized string.
*/
char *cap_string(char *s)
{
char *ptr = s;
int foundDelimit = 1;

while (*s)
{
if (isDelimiter(*s))
{
foundDelimit = 1;
}
else if (isLower(*s) && foundDelimit)
{
*s -= 32;
foundDelimit = 0;
}
else
{
foundDelimit = 0;
}
s++;
}
return (ptr);
}

