#include <stdio.h>

void rotatebyOne(int ar[], int a);

void rotate(int ar[], int n, int a)
{
	int i;
	for (i = 0; i < n; i++)
		rotatebyOne(ar, a);
}

void rotatebyOne(int ar[], int a)
{
	int temp = ar[0], i;
	for (i = 0; i < a - 1; i++)
		ar[i] = ar[i + 1];
	ar[a-1] = temp;
}

void printArray(int ar[], int a)
{
	int i;
	for (i = 0; i < a; i++)
		printf("%d ", ar[i]);
}

int main()
{
	int ar[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
	rotate(ar, 3, 8);
	printArray(ar, 8);
	return 0;
}
