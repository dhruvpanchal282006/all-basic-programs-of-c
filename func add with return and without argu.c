#include<stdio.h>
int main()
{
float c;
float add(void);
c=add();
printf("Answer=%.2f",c);
}
float add(void)
{
float x,y,z;
printf("Enter the nos");
scanf("%f%f",&x,&y);
z = x + y;
return z;
}
