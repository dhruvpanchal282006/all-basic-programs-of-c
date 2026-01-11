#include<stdio.h>
int main()
{
    int a,b;
void add(int a,int b);
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
add(a,b);
}
void add(int x,int y)
{
int z;
z=x + y;
printf("Answer is %d",z);
}
