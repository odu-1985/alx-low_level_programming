#include <stdio.h>

/**
* main - prints Buzz each numbers of 3 and 5.
* Return: Always 0.
*/

int main(void)
{
int i;

i = 1;
printf("%d", i);

i = 2;
while (i <= 100)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf(" FizzBuzz");
}
else if (i % 3 == 0)
{
prinf(" Fizz");
}
else if ((i % 5 == 0))
{
printf(" Buzz");
}
else
{
printf(" %d", i);
}

i++;
}
printf("\n");


return (0);
}

