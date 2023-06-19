#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a random number.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;
/* Initializes random number generator */
srand(time(NULL));
/* Generates a random number and stores it in n */
n = rand() - RAND_MAX / 2;
/* Computes the last digit of n */
last_digit = n % 10;
/* Prints the last digit and its properties */
printf("Last digit of %d is %d and is ", n, last_digit);
if (last_digit > 5)
{
printf("greater than 5\n");
}
else if (last_digit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
