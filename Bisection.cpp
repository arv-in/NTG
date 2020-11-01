#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
	return(pow(x,3)-9*x+1);
}

int main()
{
	float x1,x2,x,f0,f1,f2;
	printf ("Enter the value of x1 and x2: \n");
	scanf("%f%f",&x1,&x2);
	f1=f(x1);
	f2=f(x2);
	while(f1*f2<0)
	{
		x = (x1+x2)/2;
		f0 = f(x);
		if(f1*f0<0)
		x2=x;
		else
		x1=x;
		if(fabs(x1-x2)<0.001)
		break;
	}
	printf("\n\nThe root is %f",x);
	getch();
}
