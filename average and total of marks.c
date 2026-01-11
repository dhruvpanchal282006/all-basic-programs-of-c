#include<stdio.h>
int main()
{
float physics,chemistry,maths,average,total;
printf("Enter the marks of physics\n");
printf("Enter the marks of chemistry\n");
printf("Enter the marks of maths\n");
scanf("%f",&physics);
scanf("%f",&chemistry);
scanf("%f",&maths);
total=physics + chemistry + maths;
average=total/3;
printf("total=%.2f",total);
printf("average=%.2f",average);
return 0;
}
