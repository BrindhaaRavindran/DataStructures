#include<stdio.h>
int main()
{
	int i,temp,array[1000];
	FILE *fp ;
	if ( fp = fopen("abcde.txt","r"))
	{
		i=0;
		while(!feof(fp))
		{
			fscanf(fp, "%d", &temp);
			if(temp!='\n')
			{
				array[i]=temp;
				i++;
			}
		}
	}

	int n=i;
	int leftMax[n];
	leftMax[0] = -999999;
	for (i = 1; i < n; i++)
	{
	    if(leftMax[i-1]>array[i-1])
	        leftMax[i]=leftMax[i-1];
	    else
	        leftMax[i]=array[i-1];
	}
	int rightMin = 999999;
	for (i=n-1; i>=0; i--)
	{
		if (leftMax[i] < array[i] && rightMin > array[i])
		{
			printf("%d ",array[i]);
			return;
		}
		if(rightMin>array[i])
	        rightMin=array[i];
	    else
	        rightMin=rightMin;
	}
	printf("-1");
	
}