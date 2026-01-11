#include<stdio.h>
int main()
{
float celcius,farenheit;
float convertTofarenheit(float celcius);
printf("Enter the celcius");
scanf("%f",&celcius);
farenheit=convertTofarenheit(celcius);
printf("Answer=%.2f",farenheit);
}
float convertTofarenheit(float celcius)
{
return (9.0/5.0*celcius) + 32;
}
