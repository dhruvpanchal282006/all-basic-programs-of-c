#include<stdio.h>
int main()
{
int a[5],i,j,temp;
printf("Enter the values");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
printf("The array in acending");
for(i=0;i<5;i++)
{

    printf("%d",a[i]);
}
return 0;
}
