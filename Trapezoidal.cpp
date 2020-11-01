#include<stdio.h>
#include<math.h>

float f(float x)
{
	return (exp(x)+2*x);
}

int main()
{
	int n,i;
	double a,b,h,x,sum=0,result;
	printf("Enter a,b,n:\n");
	scanf("%lf%lf%d",&a,&b,&n);
	h = fabs(b-a)/n;
	for(i=1;i<n;i++)
	{
		x = a+i*h;
		sum = sum+f(x);
	}
	result = (f(a)+f(b)+2*sum)*h/2;
	printf("\n The result is %lf",result);
}
