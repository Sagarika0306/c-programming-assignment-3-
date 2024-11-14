#include<stdio.h>
void main()
{
    int i,fac=1;
    printf("Enter a number to find Factorial:");
    scanf("%d",&i);
    while(i>=1)
    {
        fac=fac*i;
        i--;
    }
    printf("\nFactorial of given number is:%d",fac);
}