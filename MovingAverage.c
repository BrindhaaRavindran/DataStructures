#include<stdio.h>
int main()
{
    int n, array[100], i=0, sum=0, SecondElement;
    int add=0;
    float second_average, average;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    average=(float)sum/n;
    printf("Average of the given string is : \n%.2f\n",average);
    printf("Enter the second element:\n");
    scanf("%d",&SecondElement);
    array[n]=SecondElement;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=1;i<n+1;i++)
    {
        add=add+array[i];
    }
    second_average=(float)add/(n);
    printf("\nAverage after insertion of element: %.2f",second_average);
}