#include<stdio.h>
void main()
{
    float r,c=0,d=0,a=0;
    printf("enter radius of circle");
    scanf("%f",&r);
    d=2*r;
    a=3.14*r*r;
    c=2*3.14*r;
    printf("the area of circle is %f\n",a);
    printf("the diameter of circle is %f\n",d);
    printf("the circumference of circle is %f",c);



}