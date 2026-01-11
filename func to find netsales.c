#include<stdio.h>
int main()
{
float netsales,grosssales,allowance,deduction;
printf("Enter the grosssales");
scanf("%f",&grosssales);
printf("Enter the allowance");
scanf("%f",&allowance);
printf("Enter the deduction");
scanf("%f",&deduction);
float findnetsales(float grosssales,float allowance,float deduction);
netsales=findnetsales(grosssales,allowance,deduction);
printf("Answer=%.2f",netsales);
}
float findnetsales(float grosssales,float allowance,float deduction)
{
return grosssales + allowance - deduction;
}

