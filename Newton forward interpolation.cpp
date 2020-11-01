#include<stdio.h>
#include<math.h>

int fact(int);
int main()
{
	float arr[10][11],x,h,p,y,px=1;
	int i,j,n,ch=30;
	printf("\nEnter the number of data points:\n");
	scanf("%d",&n);
	
	printf("\nEnter the x data \n");
	for(i=0;i<n;i++)
	{
		printf("X[%d]=",i+1);
		scanf("%f",&arr[i][0]);
	}
	
	printf("\nEnter the y data \n");
	for(i=0;i<n;i++)
	{
		printf("Y[%d]=",i+1);
		scanf("%f",&arr[i][1]);
	}
	
	// forming difference table
	for(j=2;j<=n;j++)
	for(i=0;i<=n-1;i++)
	arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
	
	//Printing the table
	printf("\nDifference table is :");
	printf("\n\tx\ty");
	for(i=0;i<n-2;i++)
	printf("\tDiff%dY",i+1);
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n+1-i;j++)
		printf("\t%0.4f",arr[i][j]);
	}
	printf("\nEnter the value of x to interpolate f(x):");
	scanf("%f",&x);
	
	//calculate the value of f(x) at x
	h=arr[1][0]-arr[0][0];
	p=(x-arr[0][0])/h;
	y=arr[0][1];
	for(i=1;i<n;i++)
	{
		px= px*(p-(i-1));
		y=y+(arr[0][i+1]*px)/fact(i);
	}
	printf("\nThe Value of function at x=%f is %f",x,y);
}
	int fact(int n)
	{
		int i,f=1;
		for(i=1;i<=n;i++)
		f=f*i;
		return f;
	}
	
