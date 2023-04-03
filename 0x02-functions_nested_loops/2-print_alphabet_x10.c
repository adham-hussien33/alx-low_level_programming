#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each followed by a newline
 */
void print_alphabet_x10(void)
{
char c;
int i;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}

