#include<stdio.h>
int main()
{
float p,r,n,i;
printf("Enter principle amount");
scanf("%f",&p);
printf("Enter the rate");
scanf("%f",&r);
printf("Enter the years");
scanf("%f",&n);
float findi(float p,float r,float n);
i=findi(p,r,n);
printf("Interest=%.2f",i);
}
float findi(float p,float r,float n)
{
return p*r*n/1000;
}
