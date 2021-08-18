#include<stdio.h>
int fib(int n)
{
if (n <= 1)
	return n;
return fib(n-1) + fib(n-2);
}

int main ()
{
int n;
printf("Enter the nth position : ");
scanf("%d",&n);
printf("\nnth number in a Fibonacci series : ");
printf("%d", fib(n));

return 0;
}
