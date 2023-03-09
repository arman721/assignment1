#include<stdio.h>
void main()
{
    int n;
    printf("enter a number");gcc
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is a positive number",n);
    }
    else if(n==0)
    {
        printf("%d is a neither negative nor positive",n);
    }
    else
    {
        printf("%d is a negative number",n);
    }
}