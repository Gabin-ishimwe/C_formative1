#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int guesses = 0;   // declare variable we need
  srand(time(0));   // timer function to generate random on each run time
  int random = (rand() % 20) + 1; // random function to generate random number between 0-20
  while (guesses <= 10) { // while loops run when the guesses are less than 10
    int value;
    printf("Guess a number between 0 and 20: ");
    scanf("%d", &value);  // prompts the user to enter their number
    
    if(value == random) { // statement to check if the user number is equal to the random number
      guesses += 1;
      printf("Congrats you got the number, it is %i\n", value);
      break;  // break the loop
    }
    else if(value < random) { // statement to check if the user number is less than the random number
      printf("The value is less that guessing number\n");
    }
    else if (value > random) // statement to check if the user number is greater than the random number
    {
      printf("The value is greater than guessing number\n");
    }

    guesses += 1; // we increment the number of guesses on each iteration
    
  }
  printf("You have made %i guesses\n", guesses);
  return 0;
}
