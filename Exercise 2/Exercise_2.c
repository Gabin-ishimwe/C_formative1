#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, t, sum = 0, remainder; // declare needed variables

  printf("Enter an integer ");
  scanf("%d", &n); // enter an integer

  t = n; // store the integer in variable t

  while (t != 0) // iterate with a while loop when variable t != 0
  {
    remainder = t % 10;    // get the remainder of t when divided by 10
    sum = sum + remainder; // add the remainder to the variable sum
    t = t / 10;            // divide with 10
  }

  printf("Sum of digits of %d = %d\n", n, sum);

  return 0;
}
