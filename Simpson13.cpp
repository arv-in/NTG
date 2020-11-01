#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
	return (x/(1+x));
}

int main()
{
	int n,i;
	float a, b, h,y, sum_e = 0,sum_o = 0,result;
	printf("\n\nEnter lower limit, upper limit and no. of interval (for Simpson):");
	scanf("%f%f%d",&a,&b,&n);
	h = fabs(b-a)/n;	
	for(i=1;i<n;i++)
	{
		if(i%2==0)
			{
			y = a+i*h;
			sum_e = sum_e+f(y);}
		else
			{
			y = a+i*h;
			sum_o=sum_o+f(y);}
	}
	result = (h/3)*(f(a)+f(b)+2*sum_e+4*sum_o);
	printf("Result (by Simpson's' rule)is: %f",result);
}
