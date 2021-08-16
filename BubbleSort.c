#include <stdio.h>

int main()
{
  int array[100], NumberOfElements, i, j, swap;

  printf("Enter number of elements\n");
  scanf("%d", &NumberOfElements);

  printf("Enter %d integers\n", NumberOfElements);

  for (i = 0; i < NumberOfElements; ++)
    scanf("%d", &array[c]);

  for (i = 0 ; i < NumberOfElements - 1; i++)
  {
    for (j = 0 ; j < NumberOfElements - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < NumberOfElements; i++)
     printf("%d\n", array[i]);

  return 0;
}

