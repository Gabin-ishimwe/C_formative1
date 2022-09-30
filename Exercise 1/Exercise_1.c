#include <stdio.h>
#include <stdbool.h>

int main()
{
  float upperBound, odd = 0.0, even = 0.0; // declaring needed varialbes
  bool bound = true;
  while (bound) // while loop to repeat this sequence
  {
    printf("Enter a number: ");
    scanf("%f", &upperBound); // prompt user to enter a number
    if (upperBound > 0)       // if statement runing when user input number > 1
    {
      bound = false;                        // we change the bound to FALSE to stop the while loop later
      for (int i = 0; i <= upperBound; i++) // for loop to iterate through the the number and find even and odd number
      {
        if (i % 2 == 0) // if statement to check if number is even
        {
          even += i;
        }
        else if (i % 2 != 0) // if statement to check if number is odd
        {
          odd += i;
        }
      }
    }
    else // else statement when user enter an invalid number less than 0
    {
      printf("Try again\n");
    }
  }
  float difference = even - odd; // compute the differente btn even and odd numbers
  float thirdSum = even / 3;     // compute 1/3 of the sum of even number
  float fithSum = odd / 5;       // compute 1/5 of the sum of odd numbers
  printf("Sum of all even numbers: %.2f\n", even);
  printf("Sum of all odd numbers: %.2f\n", odd);
  printf("Different between sums: %.2f\n", difference);
  printf("The 3rd of even numbers: %.2f\n", thirdSum);
  printf("The 5th of odd numbers: %.2f\n", fithSum);

  return 0;
}