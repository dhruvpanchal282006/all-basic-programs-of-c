#include<stdio.h>
int main()
{
int arr[5],i;
//accepting 5 values
printf("Enter 5 values\n");
for(i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
//printing 5 values
for(i=0;i<5;i++)
{
    printf("%d",arr[i]);
}
return 0;
}
