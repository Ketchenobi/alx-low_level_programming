#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 * main - the entry point
 * Return: Always 0
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
