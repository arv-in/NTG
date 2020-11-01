#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 10

int main()
{
	float x[MAX], y[MAX], k=0, z, nr, dr;
	int i,j,n;
	printf("Enter the range\n");
	scanf("%d",&n);
	printf("\n Enter the x values:\n");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	
	printf("\n Enter the y values:\n");
	for(i=0;i<n;i++)
	scanf("%f",&y[i]);
	
	printf("\n Enter the value of z to be calculated:\n");
	scanf("%f",&z);
	
	for(i=0;i<n;i++)
	{
		nr = 1; dr = 1;
		for(j=0;j<n;j++)
		{
			if (j!=i)
			{
				nr=nr*(z-x[j]);
				dr=dr*(x[i]-x[j]);
			}
		}
		k=k+((nr/dr)*y[i]);
	}
	printf("\n Final result=%f\n",k);
	getch();
	}
