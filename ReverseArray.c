#include<stdio.h>
void reverese(int ar[], int first, int last)
{
	int temp;
	while (first < last)
	{
		temp = ar[first];
		ar[first] = ar[last];
		ar[last] = temp;
		first++;
		last--;
	}
}	

void printArray(int ar[], int n)
{
	int i;
	for (i=0; i < n; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

int main()
{
	int ar[] = {10, 20, 30, 40, 50, 60, 70};
	int a = sizeof(ar) / sizeof(ar[0]);
	printArray(ar, a);
	reverese(ar, 0, a-1);
	printf("Reversed array \n");
	printArray(ar, a);
	return 0;
}
