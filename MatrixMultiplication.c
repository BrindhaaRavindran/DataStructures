#include<stdio.h>
int main()
{
	int m, n, p, q, i, j, k, sum=0; 
	int a[100][100], b[100][100], c[100][100];
	printf("Enter number of rows and columns of matrix A : \n");
	scanf("%d %d",&m,&n);
	printf("Enter number of rows and columns of matrix B : \n");
	scanf("%d %d",&p,&q);
	printf("\nEnter elements in matrix A : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements in matrix B : \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	printf("\nProduct of the matrix A and B : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}