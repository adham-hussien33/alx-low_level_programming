#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each followed by a newline
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int line, ch;

for (line = 0; line <= 9; line++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
