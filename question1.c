#include<stdio.h>
void main()
{
    int y;
    printf("enter year");
    scanf("%d",&y);
    if(y%400==0)
    {
        printf("%d is a leap yaer",y);

    }
    else if(y%100==0)
    {
        printf("%d is not a laep year",y);

    }
    else if(y%4==0)
    {
        printf("%d is a leaf year");
    }
}