#include<stdio.h>
void main()
{
   int n,sum=0;

   do{
        printf("enter a number");
        scanf("%d",&n);
        sum=sum+n;
   }while(n>0);
   printf("the sum is %d",sum);
}