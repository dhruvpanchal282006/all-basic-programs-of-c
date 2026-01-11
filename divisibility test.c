#include<stdio.h>
int main()
{
int num1,num2;
printf("enter the first number");
scanf("%d",&num1);
printf("enter the second number");
scanf("%d",&num2);
if (num2 ==0)
{
    printf("the divisible is not posiible");

}
else if(num1%num2==0)
{
    printf("%d is divisible by %d",num1,num2);


}
else
{
    printf("%d is not divisible by %d",num1,num2);

}
}
