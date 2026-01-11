#include<stdio.h>
int main()
{
float physics,chemistry,maths,average;
float findaverage(float ,float,float);
printf("Enter the marks of physics");
scanf("%f",&physics);
printf("Enter the marks of chemistry");
scanf("%f",&chemistry);
printf("Enter the marks of maths");
scanf("%f",&maths);
average=findaverage(physics,chemistry,maths);
printf("Average=%.2f",average);
}
float findaverage(float physics,float chemistry,float maths)
{
return (physics+chemistry+maths)/3.0;
}
