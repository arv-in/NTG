#include<stdio.h>
#include<math.h>
float f(float x, float y)
{
    return(x*x+y*y);
}

int main()
{
    float x0, y0, h, xn,x1,y1;
    printf("Enter the values of x0,y0,h,xn:");
    scanf("%f%f%f%f",&x0,&y0,&h,&xn);
    printf("x0=%f\ty0=%f\n",x0,y0);
    do
    {
        y1=y0+h*f(x0,y0);
        x1=x0+h;
        printf("\nx=%f\ty=%f\n",x1,y1);
        y0=y1;
        x0=x1;
    }
    while(x0<xn);
}
