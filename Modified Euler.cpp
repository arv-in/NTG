// Modified Euler

#include<stdio.h>
#include<math.h>

float f(float x, float y)
{
	float a = x*x+y;         //function goes here
	return a;
}

int main()
{
	float y1c;
	float x0, y0, h, xn;
	printf("Enter the values of x0, y0, step size and xn respectively:\n");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	while(x0<xn)
	{
		float x1 = x0 + h;
		float y1p = y0 + h*f(x0,y0);
		do 
		{
			y1c = y0 + 0.5*h*(f(x0,y0)+f(x1,y1p));
			y1p = y1c;
		}
		while(fabs(y1c-y1p)>0.0000001);
		x0 = x1;
		y0 = y1c;
	}
	printf("At x = %f\t\ty = %f",x0,y0);
	return 0;
}
