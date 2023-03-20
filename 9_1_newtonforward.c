#include<stdio.h>
#include<conio.h>

int main()
{

int i,j,n;

float xy[10][10],h,p,px=1,x,y;
printf("Enter the number of data : ");
scanf("%d",&n);
printf("Enter the data : \n");

for(i=0;i<n;i++){
    printf("x(%d) : ",i+1);
    scanf("%f",&xy[i][0]);
    printf("y(%d) : ",i+1);
    scanf("%f",&xy[i][1]);
    }
     
     for(j=2;j<n+1;j++)
    
    for(i=0;i<n-1;i++)
     xy[i][j]=xy[i+1][j-1]-xy[i][j-1];
    printf("\nThe difference table is :-");
    printf("\nx f(x) ");
    
    for(i=0;i<n-1; i++)
    printf(" ^%d ",i+1);
    
    for(i=0;i<n;i++){
        printf("\n");
        
        for(j=0;j<n+1-i;j++){
            printf("%.4f ",xy[i][j]);
            }
        }
        
        printf("\nEnter the value of 'X' : ");
        scanf("%f",&x);
        
        for(i=1;i<n;i++){
            px*=(p-(i-1))/i;
            y+=xy[0][i+1]*px;
            }
            printf("\nThe value of function at x = %f is %f",x,y);
            getch();
    return 0;
}