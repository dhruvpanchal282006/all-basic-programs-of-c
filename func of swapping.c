#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x,y;
    printf("Enter the two nos");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("After swapping");
    printf("x=%d,y=%d",x,y);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
