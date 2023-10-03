#include<stdio.h>

int main(void)
{
    int x,a,b,y;
    printf("Enter x,a,b,y\n");
    scanf("%d %d %d %d",&x,&a,&b,&y);
    int sum1,sum2,sum3;
    sum1 = 2*x*x-(4*x)+1;
    sum2 = a*a+b;
    sum3 = 3*y*y+(8*y)+4;
    printf("%d\n",sum1);
    printf("%d\n",sum2);
    printf("%d\n",sum3);
    
}