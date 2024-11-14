#include<stdio.h>
void main()
{
    int i=1,n;
    printf("\nEnter the value of n to print all prime numbers between 1 and n:");
    scanf("%d",&n);
    printf("\nThe all prime numbers:");
    while(i<=n)
    {
        if(i%2==0)
            printf("\n%d",i);
        i++;
    }
}