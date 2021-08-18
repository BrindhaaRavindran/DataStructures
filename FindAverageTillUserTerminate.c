#include<stdio.h>
int main()
{
    int n, i=0, sum=0, NextElement;
    int add=0,array[1000];
    float Next_average, average;
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
    int k=0;
    do
    {
        printf("\nEnter the next element : \n");
        scanf("%d",&NextElement);
        array[n+k]=NextElement;
        k++;
        printf("Array after insertion of new element : \n");
        for(i=0;i<n+k;i++)
        {
            printf("%d ",array[i]);
        }
        add=0;
        for(i=1;i<=n;i++)
        {
            add=add+array[n+k-i];
        }
        Next_average=(float)add/(n);
        printf("\nAverage after insertion of element: %.2f",Next_average);
    }while(NextElement!=00);
}