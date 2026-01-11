#include<stdio.h>
int main()
{
float findarea(float l,float b);
float findperimeter(float l,float b);
float l,b,area,perimeter;
printf("Enter thr breadth");
scanf("%f",&b);
printf("Enter the length");
scanf("%f",&l);
area=findarea(l,b);
printf("Answer=%.2f",area);
perimeter=findperimeter(l,b);
printf("Answer=%.2f",perimeter);
}
float findarea(float l,float b)
{
return l*b;
}
float findperimeter(float l,float b)
{
return 2*(l+b);
}
