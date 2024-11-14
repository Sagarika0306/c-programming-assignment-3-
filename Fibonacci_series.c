#include<stdio.h>
void main()
{
    int n,x=0,y=1,z=0;
    printf("Enter a number for creating Fibonacci series:");
    scanf("%d",&n);
    printf("FIBONACCI SERIES:");
    while(z<=n)
    {
        
        printf("\n%d",z);

        x=y;
        y=z;
        z=x+y;
    }
    printf("\nLast number of Fibonacci series is:%d",z);
}