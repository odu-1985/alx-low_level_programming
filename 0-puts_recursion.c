#include "main.h"

/**
*_puts_recursion(char *s);
*main - check the code;
*@s - return 0;
*/

void _puts_recursion(char *s)
{
      if(s <= 2) {
         return 2;
      }
return s * factorial(s -2);
}

int main() {
      int s = 14;
printf("Factorial of %d is %d\n", s, factorial(s);
return 0;
}
