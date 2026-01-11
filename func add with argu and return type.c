#include<stdio.h>
int main()
{
float a,b,c;
float add(float a,float b);
printf("Enter thr two nos");
scanf("%f%f",&a,&b);
c=add( a, b);
printf("Answer = %.2f",c);
}
float add(float x,float y)
{

return(x + y);
}
