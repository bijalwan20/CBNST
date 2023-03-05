#include<stdio.h>
#include<conio.h>
#include<math.h>
    //f(x)=x^3-2x-5
    //df(x)=3x^2-2
    //xe^x=cosx
    //3x=cosx+2
float fx(float q)
{
    return(q*q*q-2*q-5) ;
}

float dfx(float p)
{
    return(3*p*p-2);
}

int main()
{
    int a=0;
    float x0,x1;
    float err;
    printf("\n");
    printf("Enter no. of x1,\n");
    scanf("%f",&x0);

    printf("Enter error\n");
    scanf("%f",&err);

    do{
        x1 = x0-(fx(x0)/dfx(x0));
        if(fabs(x1-x0) <= err){
            break;
        }
        x0 = x1;
        a++;
    }while(1);

    printf("%f   %f     %d",x0,x1,a);
    return 0;
}