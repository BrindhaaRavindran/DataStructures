
#include<stdio.h>
#include<math.h>
int fib(int n) {
double phi = (1 + sqrt(5)) / 2;
return round(pow(phi, n) / sqrt(5));
}
int main ()
{
int n;
printf("Enter the nth position to find fibonacci number : ");
scanf("%d",&n);
printf("Fibonacci number at %d position : ",n);
printf("%d", fib(n));
return 0;
}
