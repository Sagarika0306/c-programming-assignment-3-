#include<stdio.h>
void main()
{
    int i;
    printf("\nEnter the number to check whether the number is Prime or not:");
    scanf("%d",&i);
    if(i%2==0)
        printf("\nThe number is Prime...");
    else
        printf("\nThe number is not Prime...");
}