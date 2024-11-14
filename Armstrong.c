#include<stdio.h>
void main()
{
    int i,x,sum=0,r;
    printf("Enter a number to check whether it is Armstrong or not:");
    scanf("%d",&i);
    x=i;
    while(i>0)
    {
        r=i%10;
        sum=sum+(r*r*r);
        i=i/10;
    }
    if(sum==x)
        printf("\nThe number is Armstrong...");
    else
        printf("\nThe number is not Armstrong...");
}