#include <stdio.h>
 

long factorial(int numberOfRows)
{
  int j;
  long result = 1;
 
  for (j = 1; j <= numberOfRows; j++)
    result = result*j;
 
  return result;
}
 
int main()
{
  int i, numberOfRows, j;
 
  printf("Enter the number of rows you wish to see in pascal triangle\n");
  scanf("%d",&numberOfRows);
 
  for (i = 0; i < numberOfRows; i++)
  {
    for (j = 0; j <= (numberOfRows - i - 2); j++)
      printf(" ");
 
    for (j = 0 ; j <= i; j++)
      printf("%ld ",factorial(i)/(factorial(j)*factorial(i-j)));
 
    printf("\n");
  }
 
  return 0;
}
 
