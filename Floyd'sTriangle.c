#include <stdio.h>
int main()
{
  int numberOfRows, row,  column, number = 1;

  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &numberOfRows);

  for (row = 1; row <= numberOfRows; row++)
  {
    for (column = 1; column <= row; column++)
    {
      printf("%d ", number); // Please note space after %d
      number++;
    }
    printf("\n");
  }

  return 0;
}