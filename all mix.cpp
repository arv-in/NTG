#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return sin(x*x);
}

void simps()
{
		//Simpson
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

void trap()
{
		// Trapezoidal
	int n,i;
	double a,b,h,x,sum=0,result;
	printf("\n\nEnter lower limit, upper limit and no. of interval (for Trapezoidal):");
	scanf("%lf%lf%d",&a,&b,&n);
	h = fabs(b-a)/n;
	for(i=1;i<n;i++)
	{
		x = a+i*h;
		sum = sum+f(x);
	}
	result = (h/2)*(f(a)+f(b)+2*sum);
	printf("The result (using Trapezoidal rule) is: %lf ", result);
}

void weddle()
{
		//Weddles's
	float x0,xn,h,sum=0.0,s1,s2,s3,s4,s5;
	printf("\n\n\nEnter lower and upper limit of x ");
	scanf("%f%f",&x0,&xn);
	h = (xn-x0)/6;
	s1 = f(x0)+f(x0+6*h);
	s2 = f(x0+h)+f(x0+5*h);
	s3 = f(x0+2*h)+f(x0+4*h);
	s4 = f(x0+3*h);
	//s5 = 2*f(x0+6*h);
	sum = sum+(3*h/10)*(s1+5*s2+s3+6*s4);
	printf("Result (using Weddle's rule') = %f",sum);
	getch();
}

int main()
{
	trap();
	simps();
	weddle();
}

