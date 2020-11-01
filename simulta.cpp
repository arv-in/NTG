#include<stdio.h>
#include<math.h>

float f(float x, float y, float z)
{
	float a =  z ;  //Enter the function dy/dx here
	return a;
}

float g(float x, float y, float z)
{
	float a =  x*y+1  ;  //Enter the function dz/dx here
	return 0;
}
int main()
{
	float x0=0, y0=0, z0=1, h=0.5, xn = 0.5;
	int n = (xn-x0)/h;
	for(int i=0;i<n;i++)
	{
		float k1 = h*f(x0,y0,z0);
		float l1 = h*f(x0,y0,z0);
		float k2 = h*f(x0+0.5*h,y0+0.5*k1,z0+0.5*l1);
		float l2 = h*g(x0+0.5*h,y0+0.5*k1,z0+0.5*l1);
		float k3 = h*f(x0+0.5*h,y0+0.5*k2,z0+0.5*l2);
		float l3 = h*g(x0+0.5*h,y0+0.5*k2,z0+0.5*l2);
		float k4 = h*f(x0+h,y0+k3,z0+l3);
		float l4 = h*g(x0+h,y0+k3,z0+l3);
		printf("step = %d\nk1 = %f\t\tl1 = %f\nk2 = %f\t\tl2 = %f\nk3 = %f\t\tl3 = %f\nk4 = %f\t\tl4 = %f\n",i+1,k1,l1,k2,l2,k3,l3,k4,l4);
		float k = (k1+2*k2+2*k3+k4)/6;
		float l = (l1+2*l2+2*l3+l4)/6;
		float y = y0+k;
		float z = z0+l;
		printf("\nk = %f\t\tl = %f",k,l);
		printf("\n\nResult\ny(%f) = %f\nz(%f) = %f",xn,y,xn,z);
	}
}
