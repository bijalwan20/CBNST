#include<stdio.h>
#include<math.h>
double fx(double x)
{
    return x*x*x*x-x-10;
}
double diff(double x)
{
    return 4*x*x*x-x-10;
}
int main(){
    double a,b,c;
    a=1,b=2;
    c=(a+b)/2;
    while(1)
    {

        b=c-fx(c)/diff(c);
        if(fabs(b-c)<0.0001)
        break;
        c=b;
    }
    printf("the root is %lf",b);
    return 0;

}