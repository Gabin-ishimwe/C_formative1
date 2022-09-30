#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// declaring function that we will needed and their arguments
int upperCaseChars(char arg[]);
int lowerCaseChars(char arg[]);
int specialChars(char arg[]);

int main()
{
  char specialWord[] = ""; // declaring variable we will need
  printf("Enter a special word: ");
  scanf("%s", specialWord); // promps user to enter a value
  int upperCaseNum = upperCaseChars(specialWord);
  int lowerCaseNum = lowerCaseChars(specialWord);
  int specialCharNum = specialChars(specialWord);

  printf("Number of uppercase %i\n", upperCaseNum);
  printf("Number of lowercase %i\n", lowerCaseNum);
  printf("Number of special characters %i\n", specialCharNum);

  return 0;
}

int upperCaseChars(char arg[]) // function to get uppercases in a the arg
{
  int num = 0;
  for (int i = 0; i < strlen(arg); i++) // for loop to calculate number of uppercase chars in the arg value
  {
    if (isupper(arg[i])) // statement that check if a character is an uppercase
    {
      num += 1; // increment each time our num varialbes
    }
  }

  return num;
}

int lowerCaseChars(char arg[]) // function to get lowecases in a the arg
{
  int num = 0;
  for (int i = 0; i < strlen(arg); i++) // for loop to calculate number of lowercase chars in the arg value
  {
    if (islower(arg[i])) // statement that check if a character is an lowercase
    {
      num += 1; // increment each time our num varialbes
    }
  }
  return num;
}

int specialChars(char arg[]) // function that calculate number of special characters in the arg value
{
  int num = 0;
  // list of all special characters we are checking for
  char allChars[] = {'~', '`', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '=', '+', '{', '}', '[', ']', '|', ':', ';', '"', ',', '<', '.', '>', '/', '?'};
  for (int i = 0; i < sizeof(allChars) / sizeof(allChars[0]); i++) // iterate the allChars list
  {
    for (int j = 0; j < strlen(arg); j++) // iterate through the arg value
    {
      if (arg[j] == allChars[i]) // compare to see if there is a special character in the arg value
      {
        num += 1; // increment each time the num variable
      }
    }
  }
  return num;
}
