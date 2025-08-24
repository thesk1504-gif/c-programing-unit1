#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    temp=b;
    b=a;
    a=temp;
    printf("After swaping the number are %d,%d",a,b);
 
}