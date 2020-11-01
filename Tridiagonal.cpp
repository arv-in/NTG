#include<stdio.h>
#include<math.h>

int main()
{
	int i,n;
	float a[10],b[10],c[10],alpha[10],beta[10],x[10],d[10];
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	
	printf("Enter the values of a:\n");
	for(i=2;i<=n;i++)
	scanf("%f",&a[i]);
	
	printf("Enter the values of b:\n");
	for(i=1;i<=n;i++)
	scanf("%f",&b[i]);
	
	printf("Enter the values of c:\n");
	for(i=1;i<n;i++)
	scanf("%f",&c[i]);
	
	printf("Enter the values of d:\n");
	for(i=1;i<=n;i++)
	scanf("%f",&d[i]);
	
	alpha[1] = b[1];
	
	for(i=2;i<=n;i++)
	alpha[i]=b[i]-a[i]*c[i-1]/alpha[i-1];
	
	beta[1]=d[1]/b[1];
	
	for(i=2;i<=n;i++)
	beta[i] = (d[i]-a[i]*beta[i-1])/alpha[i];
	
	x[n]=beta[n];
	
	for(i=n-1;i>=1;i--)
	x[i]=beta[i]-c[i]*x[i+1]/alpha[i];
	
	for(i=1;i<=n;i++)
	printf("x[%d]=%f\n",i,x[i]);
}
