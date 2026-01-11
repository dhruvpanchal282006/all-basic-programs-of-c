#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the two numbers");
scanf("%f%f",&a,&b);
if(b==0)
{
    printf("Division by zero is not posiible");

}
else
{
    c=a/b;
    printf("%.2f=%.2f/%.2f",c,a,b);

}
return 0;
}
