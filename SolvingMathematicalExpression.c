#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000],operators[100],alphabets[100],sc[100];
    int operands[100],y,i,total_operator,opi=0,ain=0,opn=0,scn=0;
    printf("Enter a String:");
    scanf("%s",a);
    i=0;
    while(a[i]!='\0')
    {
        if(isdigit(a[i]))
        {
            total_operator=0;
            while(isdigit(a[i]))
            {
                y=a[i]-'0';
                total_operator=(total_operator*10)+y;
                i++;
            }
            operands[opi++]=total_operator;
            i--;
        }
        else if(isalpha(a[i]))
        {
            alphabets[ain++]=a[i];
        }
        else if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
        {
            operators[opn++]=a[i];
        }
        else
        {
            sc[scn++]=a[i];
        }
        i++;
    }
    char x;
    int pointn=0,points=0;
    int p=operands[pointn];
    int answer=p;
    for(pointn=1;pointn<opi;pointn++)
    {
        int p=operands[pointn];
        x=operators[points];
        if(x=='+')
        {
            answer = answer+p;        
        }
        else if(x=='-')
        {
            answer = answer-p;
        }
        else if(x=='*')
        {
            answer = answer*p;
        }
        else
        {
            answer = answer/p;
        }
        points++;
    }
    printf("%d",answer);
}