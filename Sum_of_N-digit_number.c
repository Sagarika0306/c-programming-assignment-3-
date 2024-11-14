#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    printf("\nEnter value of N-digit number:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("\nThe sum of N-digit Number is:%d",sum);
}