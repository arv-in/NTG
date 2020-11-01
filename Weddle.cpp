#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return (1/(1+x*x));
}

int main()
{
	float x0,xn,h,sum=0.0,s1,s2,s3,s4,s5;
	printf("\n\n\nEnter lower and upper limit of x ");
	scanf("%f%f",&x0,&xn);
	h = (xn-x0)/12;
	s1 = f(x0)+f(x0+12*h);
	s2 = f(x0+h)+f(x0+5*h)   + f(x0+7*h)+f(x0+11*h);
	s3 = f(x0+2*h)+f(x0+4*h)  + f(x0+8*h)+f(x0+10*h);
	s4 = f(x0+3*h)            + f(x0+9*h);
	s5 = 2*f(x0+6*h);
	sum = sum+(3*h/10)*(s1+5*s2+s3+6*s4+s5);
	printf("Result (using Weddle's rule') = %f",sum);
	getch();
}
