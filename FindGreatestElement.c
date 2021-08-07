#include <stdio.h>

int greaterElement(int ar[], int size)
{
	int i;
	int maximum = ar[0];
	for (i = 1; i < size; i++)
	{
		if (ar[i] > maximum)
		{	
			maximum = ar[i];
		}
	}
	return maximum;
}

int main()
{
	int ar[] = {100, 2340, 540, 30, 708};
	int n = sizeof(ar)/sizeof(ar[0]);
	printf("Greatest element is %d", greaterElement(ar, n));
	return 0;
}
