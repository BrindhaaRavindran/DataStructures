#include <stdio.h>  
#include <string.h>  
  
#define size 100  
int peep,stack[size];  
  
void push(char s)
{
	if(top == size-1)
	{  
        	printf("stack overflow");  
	}  
	else 
	{  
        	stack[++top]=s;  
	}   
}  
  
void pop()
{  
	printf("%c",stack[top--]);  
}  
   
void main()  
{  
   char str[]="Life is beautiful";  
   int l = strlen(str);  
   int i;  
  
   for(i=0;i<l;i++)  
        push(str[i]);  
   for(i=0;i<l;i++)  
	pop();  
} 
