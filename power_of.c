#include<stdio.h>
void main()
{
    int i=1,x,n,y=1;
    printf("\nEnter the value:");
    scanf("%d",&x);
    printf("\nEnter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        y=y*x;
        i++;
    }
    printf("\nThe result is:%d",y);
}