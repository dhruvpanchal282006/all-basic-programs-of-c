#include<stdio.h>
int main()
{
float length,breadth,area,perimeter;
printf("Enter the length\n");
printf("Enter the breadth\n");
scanf("%f",&length);
scanf("%f",&breadth);
perimeter=2*(length+breadth);
area=length*breadth;
printf("perimeter=%.2f\n",perimeter);
printf("area=%.2f\n",area);
return 0;
}
