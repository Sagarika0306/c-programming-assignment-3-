#include<stdio.h>
void main()
{
    int x,i,rev=0;
    printf("\nEnter number to check whether it is Palindrome or not:");
    scanf("%d",&i);
    x=i;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(rev==x)
        printf("The number is Palindrome...");
    else
        printf("The number is not Palindrome...");
}