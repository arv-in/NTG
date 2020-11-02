#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	float a = -2*x*y*y;            // Enter y' here
	return a;
}

int main()
{
	int i=0;
	float k1,k2,k3,k4,k,y;
	float x0,y0,h,xn;
	printf("Enter the values of x0, y0, h and xn:\n");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	while(x0<xn)
	{
		i = i+1;
		k1 = h*f(x0,y0);
		k2 = h*f((x0+0.5*h),(y0+0.5*k1));
		k3 = h*f((x0+0.5*h),(y0+0.5*k2));
		k4 = h*f((x0+h),(y0+k3));
		k = (k1+2*k2+2*k3+k4)/6;
		y0 = y0+k;
		x0 = x0+h;
		printf("\n\nStep = %d\nk1 = %f\nk2 = %f\nk3 = %f\nk4 = %f\n",i,k1,k2,k3,k4);
		printf("\nAt x = %f \t\t y = %f\n",x0,y0);
	}
}
