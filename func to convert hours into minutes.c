#include<stdio.h>
float convertTominutes(float hours);
int main()
{
float hours,minutes;
printf("Enter the hours");
scanf("%f",&hours);

minutes=convertTominutes(hours);
printf("Answer =%.2f",minutes);
return 0;
}
float convertTOminutes(float hours)
{

return hours * 60;
}
