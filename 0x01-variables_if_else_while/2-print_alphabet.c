#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is :\n", n)
if (n % 10 > 5)
{
printf("is %d and is less than 5 and not 0", n % 10);
}
else if (n == 0)
{
printf("is %d and is 0", n % 10);
}
else
{
printf("is %d and is less than 6 and not 0", n % 10);
}
return (0);
}

