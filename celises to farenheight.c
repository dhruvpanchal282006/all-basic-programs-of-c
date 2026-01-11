#include<stdio.h>
int main()
{
float celises,farenheight;
printf("Enter the celises");
scanf("%f",&celises);
farenheight = 1.8*celises + 32;
printf("farenheight=%.2f",farenheight);
return 0;
}
