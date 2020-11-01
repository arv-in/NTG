#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
	return (cos(x)-x*exp(x));
}

int main()
{
	int i,n;
	float a,b,x,error;
	printf("Enter the value of a,b,error, iteration:\n");
	scanf("%f%f%f%d",&a,&b,&error,&n);
	for(i=1;i<=n;i++)
	{
		x = (b*f(a)-a*f(b))/(f(a)-f(b));
		if((f(b)*f(x))<0)
		a=x;
		else
		b=x;
		if(fabs(a-b)<=error)
		break;
	}
	printf("\nthe root is %f",x);
	getch();
}
