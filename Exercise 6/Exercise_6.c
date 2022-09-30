#include <stdio.h>

int main()
{
  // declare the local variables
  int i, j, rows;
  printf(" Enter a number to define the rows: ");
  scanf("%d", &rows);   // Enter number of rows
  int space = rows - 1; // space variable will help us compute the space in the pattern
  int num = 1;
  for (i = 1; i <= rows; i++) // for loop to iterate each row
  {
    for (j = 1; j <= space; j++) // for loop to iterate and add space on each row
    {
      printf("  "); // print the space
    }
    for (int k = 1; k <= num; k++) // for loop to iterate and printout the asterisks
    {
      printf(" *"); // print asterisks
    }
    if (space > i)
    {
      space = space - 1;
      num = num + 2;
    }
    if (space < i)
    {
      space = space + 1;
      num = num - 2;
    }
    printf("\n");
  }
  return 0;
}