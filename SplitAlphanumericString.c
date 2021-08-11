#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100], ss[100], a[100], d[100];
    char ch;
    int i=0, j=0, k=0, l=0;
    printf("Enter a string: ");
    scanf("%s",str);
    while((ch=str[i])!='\0')
    {
        if((ch>=48)&&(ch<=57))
        {
           d[j]=ch;
           j++;
        }
        else if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
        {
           a[k]=ch;
           k++;
        }
        else
        {
            if(ch==32)
            {
                i++;
                continue;
            }
            ss[l]=ch;
            l++;
        }
        i++;
    }
    if(j!=0)
    printf("Digits : ");
    for(i=0;i<j;i++)
    {
        printf("%c ",d[i]);
    }
    if(k!=0)
    printf("\nAlphabets : ");
    for(i=0;i<k;i++)
    {
        printf("%c ",a[i]);
    }
    if(l!=0)
    printf("\nSpecial Symbols : ");
    for(i=0;i<l;i++)
    {
        printf("%c ",ss[i]);
    }
    return 0;
}