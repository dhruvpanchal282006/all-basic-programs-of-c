#include<stdio.h>
int main()
{
int a[10][10],b[10][10],sum[10][10];
int r,c;
//accepting the rows and column
printf("Enter the number of rows and columns");
scanf("%d%d",&r,&c);
//accpeting the first array
printf("Enter the elements of first array");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
//accepting the value of second array
printf("Enter the elements of second array");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
//resulting 2D array
printf("Sum of resulting array\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
}
//printing the sum
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("%d%",sum[i][j]);
}
}
return 0;
}
