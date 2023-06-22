#include "main.h"
#include <ctype.h>
/**
 * 0-isupper - checks for uppercase character.
 * main - The entry point
 * Return: Always 0
 */
int isupper(int c)
{
if (c >= 'A' && c <= 'Z') {
return 1;
}
else
{
return 0;
}
}

