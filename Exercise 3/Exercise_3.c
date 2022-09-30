#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfect(int arg); // declaring needed functions
void closestPerfectSquare(int arg);

int main()
{
  int value, answer = 0; // declaring needed variables
  bool gotValue;
  printf("Enter a value: ");
  scanf("%d", &value); // prompt user to enter number

  closestPerfectSquare(value); // pass the number to this function
  /* code */
  return 0;
}

bool isPerfect(int arg)
{
  if (sqrt(arg) == floor(sqrt(arg))) // checks if the arg passed is a perfect square root whole number
  {
    return true; // returns true
  }
  return false; // return false
}

void closestPerfectSquare(int arg)
{
  if (isPerfect(arg))
  {
    printf("The Perfect square is %d\n", arg);
    return;
  }
  int aboveArg = 0, belowArg = 0, value; // declare needed variables

  // in this while loop we are checking for perfect square above the arg we computing with
  value = arg + 1;
  while (true) // iterate unconditionally
  {
    if (isPerfect(value)) // checks if the value is a perfect square
    {
      aboveArg = value; // store the value in another variable
      break;            // breaks the loop
    }
    else
    {
      value++; // increments the variable value to keep on checking
    }
  }

  // in this while loop we are checking for perfect square below the arg we computing with
  value = arg - 1;
  while (true) // iterate unconditionally
  {
    if (isPerfect(value)) // checks if the value is a perfect square
    {
      belowArg = value; // store the value in another variable
      break;            // breaks the loop
    }
    else
    {
      value--; // decrements the variable value to keep on checking
    }
  }

  // we compute the difference between the perfect square we got and the origin value we had at the beginning
  int diff1 = aboveArg - arg;
  int diff2 = arg - belowArg;

  if (diff1 < diff2) // if statements to check which of the value is smaller than the other
  {
    printf("The Nearest perfect square is %d\n", aboveArg);
  }
  else
  {
    printf("The Nearest perfect square is %d\n", belowArg);
  }
}
