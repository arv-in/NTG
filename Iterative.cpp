#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
	return ((1+cos(x))/3);
}

int main()
{
	int n,i;
	float x0,x1;
	printf ("Enter initial value of x0 and No. of iteranios n:\n");
	scanf("%f%d",&x0,&n);
	for(i=1;i<=n;i++)
	{
		x1 = f(x0);
		printf("\t\ti=%d\t\tx1=%f\n",i,x1);
		if(fabs(x1-x0)<0.0001)
		break;
		else
		x0=x1;
	}
	printf("The root is %f",x1);
	getch();
}
