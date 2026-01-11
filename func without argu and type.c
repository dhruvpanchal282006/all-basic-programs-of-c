#include<stdio.h>
int main()
{
void add(void);
add();
}
void add(void)
{
    int a,b,c;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum=%d",c);
}
