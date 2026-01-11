#include<stdio.h>
int main()
{
float dollars,rupees;
float convertTorupees(float dollars);
printf("Enter the dollars");
scanf("%f",&dollars);
rupees=convertTorupees(dollars);
printf("Answer=%.2f",rupees);
}
float convertTorupees(float dollars)
{
return dollars*90;
}
